#include "commitwidget.h"

// Qt
#include <QLabel>
#include <QProgressBar>
#include <QVBoxLayout>

// QApt
#include <QApt6/Transaction>

CommitWidget::CommitWidget(QWidget *parent)
    : QWidget(parent)
    , m_trans(nullptr)
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    m_commitLabel = new QLabel(this);
    layout->addWidget(m_commitLabel);

    m_progressBar = new QProgressBar(this);
    layout->addWidget(m_progressBar);
}

void CommitWidget::setTransaction(QApt::Transaction *trans)
{
    m_trans = trans;
    connect(m_trans, &QApt::Transaction::statusDetailsChanged,
            m_commitLabel, &QLabel::setText);
    connect(m_trans, &QApt::Transaction::progressChanged,
            m_progressBar, &QProgressBar::setValue);
    m_progressBar->setValue(trans->progress());
}

void CommitWidget::clear()
{
    m_commitLabel->setText(QString());
    m_progressBar->setValue(0);
    m_trans = nullptr;
}
