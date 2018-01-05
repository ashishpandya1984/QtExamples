#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QDialog>
#include "rqdatasourceselectionview.h"
#include "sourceaddition.h"
#include "rqglasswidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), m_tableView( 0 ),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout();
    m_tableView = new RQDataSourceSelectionView( 0 );

    layout->addWidget(m_tableView);
    ui->frm_tableView->setLayout(layout);

    m_glassBackground = new RQGlassWidget(this);
    m_srcAdditionDialog = new SourceAddition(this);

    // When user tries to open the source addition dialog:
    // 1. Invoke the glass background
    QObject::connect(ui->btn_Add, SIGNAL(pressed()), m_glassBackground, SLOT(showGlass()));

    // 2. open the source addition dialog
    QObject::connect(m_glassBackground, SIGNAL(backgroundReady()), this, SLOT(openSourceAdditionDialog()));

    // 3. close the glass background on closing of the source addition dialog on accept/reject
    QObject::connect(m_srcAdditionDialog, SIGNAL(accepted()), m_glassBackground, SLOT(hideGlass()));
    QObject::connect(m_srcAdditionDialog, SIGNAL(rejected()), m_glassBackground, SLOT(hideGlass()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSourceAdditionDialog()
{
    if ( m_srcAdditionDialog->exec() == QDialog::Accepted )
    {
        if(m_tableView)
            m_tableView->addDataSource( m_srcAdditionDialog->sourceName(),
                                        m_srcAdditionDialog->sourceValue() ,
                                        m_srcAdditionDialog->sourceType());
    }
}
