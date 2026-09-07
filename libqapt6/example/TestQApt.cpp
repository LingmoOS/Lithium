/***************************************************************************
 *   Copyright © 2010 Jonathan Thomas <echidnaman@kubuntu.org>             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU General Public License as        *
 *   published by the Free Software Foundation; either version 2 of        *
 *   the License or (at your option) version 3 or any later version        *
 *   accepted by the membership of KDE e.V. (or its successor approved     *
 *   by the membership of KDE e.V.), which shall act as a proxy            *
 *   defined in Section 14 of version 3 of the license.                    *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#include "TestQApt.h"

#include <QDir>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QStackedWidget>
#include <QLineEdit>
#include <QIcon>
#include <QMainWindow>
#include <QDebug>
#include <QStatusBar>

#include <QApt6/Backend>
#include <QApt6/Transaction>

#include "cacheupdatewidget.h"
#include "commitwidget.h"

QAptTest::QAptTest()
    : QMainWindow()
    , m_trans(nullptr)
    , m_stack(nullptr)
{
    setWindowIcon(QIcon("application-x-deb"));

    m_backend = new QApt::Backend(this);
    m_backend->init();

    connect(m_backend, &QApt::Backend::packageChanged, this, &QAptTest::updateStatusBar);

    m_stack = new QStackedWidget(this);

    m_mainWidget = new QWidget(m_stack);
    QVBoxLayout *layout = new QVBoxLayout(m_mainWidget);
    m_stack->addWidget(m_mainWidget);

    m_cacheUpdateWidget = new CacheUpdateWidget(m_stack);
    m_stack->addWidget(m_cacheUpdateWidget);
    m_commitWidget = new CommitWidget(m_stack);
    m_stack->addWidget(m_commitWidget);

    m_stack->setCurrentWidget(m_mainWidget);

    QHBoxLayout *topHBox = new QHBoxLayout(m_mainWidget);
    layout->addLayout(topHBox);

    m_lineEdit = new QLineEdit(m_mainWidget);
    m_lineEdit->setText("muon");
    m_lineEdit->setClearButtonEnabled(true);
    topHBox->addWidget(m_lineEdit);
    connect(m_lineEdit, &QLineEdit::returnPressed, this, &QAptTest::updateLabels);

    QPushButton *showButton = new QPushButton("Show", m_mainWidget);
    showButton->setIcon(QIcon("layer-visible-on"));
    topHBox->addWidget(showButton);
    connect(showButton, &QPushButton::clicked, this, &QAptTest::updateLabels);

    m_actionButton = new QPushButton(m_mainWidget);
    topHBox->addWidget(m_actionButton);
    connect(m_actionButton, &QPushButton::clicked, this, &QAptTest::commitAction);

    QVBoxLayout *vbox = new QVBoxLayout(m_mainWidget);
    layout->addLayout(vbox);

    m_nameLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_nameLabel);
    m_sectionLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_sectionLabel);
    m_originLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_originLabel);
    m_installedSizeLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_installedSizeLabel);
    m_maintainerLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_maintainerLabel);
    m_sourceLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_sourceLabel);
    m_versionLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_versionLabel);
    m_packageSizeLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_packageSizeLabel);
    m_shortDescriptionLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_shortDescriptionLabel);
    m_longDescriptionLabel = new QLabel(m_mainWidget);
    vbox->addWidget(m_longDescriptionLabel);

    QHBoxLayout *bottomHBox = new QHBoxLayout(m_mainWidget);
    layout->addLayout(bottomHBox);

    QPushButton *cacheButton = new QPushButton("Update Cache", m_mainWidget);
    cacheButton->setIcon(QIcon("view-refresh"));
    bottomHBox->addWidget(cacheButton);
    connect(cacheButton, &QPushButton::clicked, this, &QAptTest::updateCache);

    QPushButton *upgradeButton = new QPushButton("Upgrade System", m_mainWidget);
    upgradeButton->setIcon(QIcon("system-software-update"));
    bottomHBox->addWidget(upgradeButton);
    connect(upgradeButton, &QPushButton::clicked, this, &QAptTest::upgrade);

    // Package count labels in the statusbar
    m_packageCountLabel = new QLabel(this);
    m_changedPackagesLabel = new QLabel(this);
    statusBar()->addPermanentWidget(m_packageCountLabel);
    statusBar()->addPermanentWidget(m_changedPackagesLabel);
    statusBar()->show();

    updateLabels();
    updateStatusBar();
    setCentralWidget(m_stack);

}

void QAptTest::updateLabels()
{
    m_package = m_backend->package(m_lineEdit->text());

    if (m_package) {
        m_nameLabel->setText(QString("<b>Package:</b> %1").arg(m_package->name()));
        m_sectionLabel->setText(QString("<b>Section:</b> %1").arg(m_package->section()));
        m_originLabel->setText(QString("<b>Origin:</b> %1").arg(m_package->origin()));
        QString installedSize = QString("%1").arg(m_package->availableInstalledSize());
        m_installedSizeLabel->setText(QString("<b>Installed Size:</b> %1").arg(installedSize));
        m_maintainerLabel->setText(QString("<b>Maintainer:</b> %1").arg(m_package->maintainer()));
        m_sourceLabel->setText(QString("<b>Source package:</b> %1").arg(m_package->sourcePackage()));
        m_versionLabel->setText(QString("<b>Version:</b> %1").arg(m_package->version()));
        QString packageSize = QString("%1").arg(m_package->downloadSize());
        m_packageSizeLabel->setText(QString("<b>Download size:</b> %1").arg(packageSize));
        m_shortDescriptionLabel->setText(QString("<b>Description:</b> %1").arg(m_package->shortDescription()));
        m_longDescriptionLabel->setText(m_package->longDescription());

        if (!m_package->isInstalled()) {
            m_actionButton->setText("Install Package");
            m_actionButton->setIcon(QIcon("list-add"));
        } else {
            m_actionButton->setText("Remove Package");
            m_actionButton->setIcon(QIcon("list-remove"));
        }

        if (m_package->state() & QApt::Package::Upgradeable) {
            m_actionButton->setText("Upgrade Package");
            m_actionButton->setIcon(QIcon("system-software-update"));
        }

        qDebug() << m_package->supportedUntil();
        QApt::PackageList searchList = m_backend->search("kdelibs5");
        for (QApt::Package *pkg : searchList) {
            qDebug() << pkg->name();
        }
    }
}

void QAptTest::updateCache()
{
    if (m_trans) // Transaction running, you could queue these though
        return;

    m_trans = m_backend->updateCache();

    // Provide proxy/locale to the transaction
    // Qt6 does not have a direct equivalent for KProtocolManager, you may need to implement your own proxy handling

    m_trans->setLocale(QLatin1String(setlocale(LC_MESSAGES, 0)));

    // Pass the new current transaction on to our child widgets
    m_cacheUpdateWidget->setTransaction(m_trans);
    connect(m_trans, &QApt::Transaction::statusChanged, this, &QAptTest::onTransactionStatusChanged);

    m_trans->run();
}

void QAptTest::upgrade()
{
    if (m_trans) // Transaction running, you could queue these though
        return;


    m_trans = m_backend->upgradeSystem(QApt::FullUpgrade);

    // Provide proxy/locale to the transaction
    // Qt6 does not have a direct equivalent for KProtocolManager, you may need to implement your own proxy handling

    m_trans->setLocale(QLatin1String(setlocale(LC_MESSAGES, 0)));

    // Pass the new current transaction on to our child widgets
    m_cacheUpdateWidget->setTransaction(m_trans);
    m_commitWidget->setTransaction(m_trans);
    connect(m_trans, &QApt::Transaction::statusChanged, this, &QAptTest::onTransactionStatusChanged);

    m_trans->run();
}

void QAptTest::commitAction()
{
    if (m_trans) // Transaction running, you could queue these though
        return;

    if (!m_package->isInstalled()) {
        m_package->setInstall();
    } else {
        m_package->setRemove();
    }

    if (m_package->state() & QApt::Package::Upgradeable) {
        m_package->setInstall();
    }

    m_trans = m_backend->commitChanges();

    // Provide proxy/locale to the transaction
    // Qt6 does not have a direct equivalent for KProtocolManager, you may need to implement your own proxy handling

    m_trans->setLocale(QLatin1String(setlocale(LC_MESSAGES, 0)));

    // Pass the new current transaction on to our child widgets
    m_cacheUpdateWidget->setTransaction(m_trans);
    m_commitWidget->setTransaction(m_trans);
    connect(m_trans, &QApt::Transaction::statusChanged, this, &QAptTest::onTransactionStatusChanged);

    m_trans->run();
}

void QAptTest::onTransactionStatusChanged(QApt::TransactionStatus status)
{
    switch (status) {
    case QApt::RunningStatus:
        // For roles that start by downloading something, switch to download view
        if (m_trans->role() == (QApt::UpdateCacheRole || QApt::UpgradeSystemRole ||
                                QApt::CommitChangesRole || QApt::DownloadArchivesRole ||
                                QApt::InstallFileRole)) {
            m_stack->setCurrentWidget(m_cacheUpdateWidget);
        }
        break;
    case QApt::DownloadingStatus:
        m_stack->setCurrentWidget(m_cacheUpdateWidget);
        break;
    case QApt::CommittingStatus:
        m_stack->setCurrentWidget(m_commitWidget);
        break;
    case QApt::FinishedStatus:
        // FIXME: Determine which transactions need to reload cache on completion
        m_backend->reloadCache();
        m_stack->setCurrentWidget(m_mainWidget);
        updateStatusBar();

        // Clean up transaction object
        m_trans->deleteLater();
        m_trans = nullptr;
        break;
    default:
        break;
    }
}

void QAptTest::updateStatusBar()
{
    m_packageCountLabel->setText(QString("%1 Installed, %2 upgradeable, %3 available")
                                 .arg(m_backend->packageCount(QApt::Package::Installed))
                                 .arg(m_backend->packageCount(QApt::Package::Upgradeable))
                                 .arg(m_backend->packageCount()));

    m_changedPackagesLabel->setText(QString("%1 To install, %2 to upgrade, %3 to remove")
                                     .arg(m_backend->packageCount(QApt::Package::ToInstall))
                                     .arg(m_backend->packageCount(QApt::Package::ToUpgrade))
                                     .arg(m_backend->packageCount(QApt::Package::ToRemove)));
}
