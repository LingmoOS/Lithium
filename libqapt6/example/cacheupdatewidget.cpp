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

#include "cacheupdatewidget.h"

#include <QLabel>
#include <QListView>
#include <QProgressBar>
#include <QPushButton>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include <QIcon>

#include <QDebug>

#include <QApt6/Transaction>

CacheUpdateWidget::CacheUpdateWidget(QWidget *parent)
    : QWidget(parent)
    , m_trans(nullptr)
    , m_lastRealProgress(0)
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    m_headerLabel = new QLabel(this);
    layout->addWidget(m_headerLabel);

    m_downloadView = new QListView(this);
    layout->addWidget(m_downloadView);

    m_downloadModel = new QStandardItemModel(this);
    m_downloadView->setModel(m_downloadModel);

    m_downloadSpeedLabel = new QLabel(this);
    layout->addWidget(m_downloadSpeedLabel);

    m_ETALabel = new QLabel(this);
    layout->addWidget(m_ETALabel);

    m_totalProgress = new QProgressBar(this);
    layout->addWidget(m_totalProgress);

    m_cancelButton = new QPushButton(this);
    m_cancelButton->setText(tr("Cancel"));
    m_cancelButton->setIcon(QIcon("dialog-cancel"));
    layout->addWidget(m_cancelButton);
}

void CacheUpdateWidget::clear()
{
    m_downloadModel->clear();
    m_downloads.clear();
    m_totalProgress->setValue(0);
}

void CacheUpdateWidget::setTransaction(QApt::Transaction *trans)
{
    m_trans = trans;
    clear();
    m_cancelButton->setEnabled(m_trans->isCancellable());
    connect(m_cancelButton, &QPushButton::pressed,
            m_trans, &QApt::Transaction::cancel);

    // Listen for changes to the transaction
    connect(m_trans, &QApt::Transaction::cancellableChanged,
            m_cancelButton, &QPushButton::setEnabled);
    connect(m_trans, &QApt::Transaction::statusChanged,
            this, &CacheUpdateWidget::onTransactionStatusChanged);
    connect(m_trans, &QApt::Transaction::progressChanged,
            this, &CacheUpdateWidget::progressChanged);
    connect(m_trans, &QApt::Transaction::downloadProgressChanged,
            this, &CacheUpdateWidget::downloadProgressChanged);
    connect(m_trans, &QApt::Transaction::downloadSpeedChanged,
            this, &CacheUpdateWidget::updateDownloadSpeed);
    connect(m_trans, &QApt::Transaction::downloadETAChanged,
            this, &CacheUpdateWidget::updateETA);
}

void CacheUpdateWidget::addItem(const QString &message)
{
    QStandardItem *n = new QStandardItem();
    n->setText(message);
    m_downloadModel->appendRow(n);
    m_downloadView->scrollTo(m_downloadModel->indexFromItem(n));
}

void CacheUpdateWidget::updateDownloadSpeed(quint64 speed)
{
    QString downloadSpeed = "Download rate: " + QString::number(speed) + "/s";

    m_downloadSpeedLabel->setText(downloadSpeed);
}

void CacheUpdateWidget::updateETA(quint64 ETA)
{
    QString timeRemaining;
    int ETAMilliseconds = ETA * 1000;

    if (ETAMilliseconds <= 0 || ETAMilliseconds > 14*24*60*60*1000) {
        // If ETA is less than zero or bigger than 2 weeks
        timeRemaining = tr("Unknown time remaining");
    } else {
        timeRemaining = tr("%1 remaining", QString::number(ETAMilliseconds).toStdString().c_str());
    }
    m_ETALabel->setText(timeRemaining);
}

void CacheUpdateWidget::onTransactionStatusChanged(QApt::TransactionStatus status)
{
    QString headerText;

    qDebug() << "cache widget: transaction status changed" << status;

    switch (status) {
    case QApt::DownloadingStatus:
        if (m_trans->role() == QApt::UpdateCacheRole)
            headerText = tr("<b>Updating software sources</b>");
        else
            headerText = tr("<b>Downloading Packages</b>");

        m_headerLabel->setText(headerText);
        break;
    default:
        break;
    }
}

void CacheUpdateWidget::progressChanged(int progress)
{
    if (progress > 100) {
        m_totalProgress->setMaximum(0);
    } else if (progress > m_lastRealProgress) {
        m_totalProgress->setMaximum(100);
        m_totalProgress->setValue(progress);
        m_lastRealProgress = progress;
    }
}

void CacheUpdateWidget::downloadProgressChanged(const QApt::DownloadProgress &progress)
{
    if (!m_downloads.contains(progress.uri())) {
        addItem(progress.uri());
        m_downloads.append(progress.uri());
    }
}
