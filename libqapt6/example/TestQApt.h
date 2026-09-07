#pragma once

#include <QApt6/Globals>
#include <QApt6/Backend>
#include <QApt6/Package>
#include <QApt6/Transaction>
#include <QApt6/DownloadProgress>

#include <QObject>
#include <qmainwindow.h>
#include <qstackedwidget.h>

#include "cacheupdatewidget.h"
#include "commitwidget.h"

class QAptTest : public QMainWindow
{
    Q_OBJECT
public:
    QAptTest();

private Q_SLOTS:
    void updateLabels();
    void updateCache();
    void commitAction();
    void upgrade();
    void onTransactionStatusChanged(QApt::TransactionStatus status);
    void updateStatusBar();

private:
    QApt::Backend *m_backend;
    QApt::Package *m_package;
    QApt::Group *m_group;
    QApt::Transaction *m_trans;

    QStackedWidget *m_stack;
    QWidget *m_mainWidget;
    CacheUpdateWidget *m_cacheUpdateWidget;
    CommitWidget *m_commitWidget;
    QLineEdit *m_lineEdit;
    QPushButton *m_actionButton;
    QLabel *m_nameLabel;
    QLabel *m_sectionLabel;
    QLabel *m_originLabel;
    QLabel *m_installedSizeLabel;
    QLabel *m_maintainerLabel;
    QLabel *m_sourceLabel;
    QLabel *m_versionLabel;
    QLabel *m_packageSizeLabel;
    QLabel *m_shortDescriptionLabel;
    QLabel *m_longDescriptionLabel;

    QLabel *m_changedPackagesLabel;
    QLabel *m_packageCountLabel;

};