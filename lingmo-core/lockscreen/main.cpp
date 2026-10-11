/*
 * Copyright (C) 2026 LingmoOS Team.
 *
 * Screen lock launcher.
 *
 * The desktop starts locking with `lingmo-screenlocker`; this launcher prefers
 * KDE's screen locker (kscreenlocker_greet, shipped with plasma-workspace in
 * current distributions), which implements ext-session-lock on Wayland, and
 * falls back to the in-tree locker when it is not installed.
 *
 * It also owns org.freedesktop.ScreenSaver / com.lingmo.ScreenLocker so that
 * applications and the session manager can request a lock.
 */

#include <QCoreApplication>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusObjectPath>
#include <QDebug>
#include <QFileInfo>
#include <QGuiApplication>
#include <QProcess>
#include <QStandardPaths>
#include <QTimer>

namespace {

//! Paths KDE's greeter can live in, in order of preference.
const char *const kKdeLockerCandidates[] = {
    "/usr/bin/kscreenlocker_greet",
    "/usr/libexec/kscreenlocker_greet",
    "/usr/lib/x86_64-linux-gnu/libexec/kscreenlocker_greet",
    "/usr/lib/kscreenlocker_greet",
    "/usr/lib64/libexec/kscreenlocker_greet",
};

QString findKdeLocker()
{
    // Explicit override first (useful for testing other lockers).
    const QString override = qEnvironmentVariable("LINGMO_LOCKER");
    if (!override.isEmpty() && QFileInfo::exists(override))
        return override;

    for (const char *candidate : kKdeLockerCandidates) {
        if (QFileInfo::exists(QLatin1String(candidate)))
            return QLatin1String(candidate);
    }

    return QStandardPaths::findExecutable(QStringLiteral("kscreenlocker_greet"));
}

QString findInTreeLocker()
{
    return QStandardPaths::findExecutable(QStringLiteral("lingmo-screenlocker-qt"));
}

} // namespace

/**
 * @brief Locks the session, and reports whether a locker is running.
 */
class ScreenLocker : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.ScreenSaver")

public:
    explicit ScreenLocker(QObject *parent = nullptr);

public Q_SLOTS:
    //! org.freedesktop.ScreenSaver
    void Lock() { lock(); }
    bool GetActive() const { return m_active; }
    uint GetTime() const { return 0; }
    uint GetSessionIdleTime() const { return 0; }
    void SimulateUserActivity() {}

    //! com.lingmo.ScreenLocker
    Q_SCRIPTABLE void lock();
    Q_SCRIPTABLE bool active() const { return m_active; }

Q_SIGNALS:
    void ActiveChanged(bool active);

private:
    void setActive(bool active);

    QProcess *m_process = nullptr;
    QString m_locker;
    bool m_active = false;
};

ScreenLocker::ScreenLocker(QObject *parent)
    : QObject(parent)
{
    const QString override = qEnvironmentVariable("LINGMO_LOCKER");
    const QString kde = findKdeLocker();
    const QString inTree = findInTreeLocker();

    if (!override.isEmpty() && QFileInfo::exists(override)) {
        m_locker = override;
    } else if (QGuiApplication::platformName().startsWith(QLatin1String("wayland"), Qt::CaseInsensitive)) {
        // Wayland: KDE's greeter implements ext-session-lock.
        m_locker = !kde.isEmpty() ? kde : inTree;
    } else {
        // X11: keep the desktop's own locker, exactly as before.
        m_locker = !inTree.isEmpty() ? inTree : kde;
    }

    if (m_locker.isEmpty())
        qWarning() << "lingmo-screenlocker: no lock screen implementation found";
    else
        qInfo() << "lingmo-screenlocker: using" << m_locker;
}

void ScreenLocker::lock()
{
    if (m_active || m_locker.isEmpty())
        return;

    m_process = new QProcess(this);
    m_process->setProgram(m_locker);

    // KDE's greeter locks immediately; LINGMO_LOCKER_ARGS allows overrides.
    const QString args = qEnvironmentVariable("LINGMO_LOCKER_ARGS");
    if (!args.isEmpty())
        m_process->setArguments(QProcess::splitCommand(args));

    connect(m_process, &QProcess::started, this, [this]() { setActive(true); });
    connect(m_process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, [this](int, QProcess::ExitStatus) {
                setActive(false);
                m_process->deleteLater();
                m_process = nullptr;
            });
    connect(m_process, &QProcess::errorOccurred, this, [this](QProcess::ProcessError) {
        qWarning() << "lingmo-screenlocker: failed to start" << m_locker;
        setActive(false);
    });

    m_process->start();
}

void ScreenLocker::setActive(bool active)
{
    if (m_active == active)
        return;

    m_active = active;
    Q_EMIT ActiveChanged(m_active);
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    if (!QDBusConnection::sessionBus().registerService(QStringLiteral("com.lingmo.ScreenLocker"))) {
        // Another instance is already locking; ask it to lock and exit.
        QDBusMessage message = QDBusMessage::createMethodCall(QStringLiteral("com.lingmo.ScreenLocker"),
                                                             QStringLiteral("/ScreenLocker"),
                                                             QStringLiteral("com.lingmo.ScreenLocker"),
                                                             QStringLiteral("lock"));
        QDBusConnection::sessionBus().send(message);
        return 0;
    }

    ScreenLocker locker;

    // Serve both interfaces on the same object: third party lock requests
    // (org.freedesktop.ScreenSaver) and the session's own (com.lingmo.*).
    QDBusConnection::sessionBus().registerObject(QStringLiteral("/ScreenLocker"), &locker,
                                                QDBusConnection::ExportAllSlots |
                                                QDBusConnection::ExportAllSignals);
    QDBusConnection::sessionBus().registerObject(QStringLiteral("/ScreenSaver"), &locker,
                                                QDBusConnection::ExportAllSlots |
                                                QDBusConnection::ExportAllSignals);

    // Support "loginctl lock-session": session managers emit Lock on the
    // session object of org.freedesktop.login1.
    QDBusConnection::systemBus().connect(QStringLiteral("org.freedesktop.login1"),
                                         QStringLiteral("/org/freedesktop/login1/session/auto"),
                                         QStringLiteral("org.freedesktop.login1.Session"),
                                         QStringLiteral("Lock"),
                                         &locker, SLOT(lock()));

    return app.exec();
}

#include "main.moc"
