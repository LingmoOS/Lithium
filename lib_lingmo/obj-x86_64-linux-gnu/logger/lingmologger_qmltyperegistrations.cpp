/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<QsLog.h>)
#  include <QsLog.h>
#endif
#if __has_include(<QsLogLevel.h>)
#  include <QsLogLevel.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Lingmo_Logger()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &QsLogging::LogLevel::staticMetaObject;},
            "QsLogging::LogLevel");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&QsLogging::LogLevel::staticMetaObject, "Lingmo.Logger", 1, nullptr, &QsLogging::LogLevel::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<QsLogging::Logger>("Lingmo.Logger", 1);
    QT_WARNING_POP
    qmlRegisterModule("Lingmo.Logger", 1, 0);
}

static const QQmlModuleRegistration lingmoLoggerRegistration("Lingmo.Logger", qml_register_types_Lingmo_Logger);
