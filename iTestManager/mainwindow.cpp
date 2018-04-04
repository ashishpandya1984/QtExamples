#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "usermanagementinterfacehandler.h"
#include "terminalmanagementinterfacehandler.h"
#include "testmanagementinterfacehandler.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->cmdBtn_usrMgmt, SIGNAL(clicked()), this, SLOT(cmd_userMgmtSelection()));
    QObject::connect(ui->cmdBtn_termMgmt, SIGNAL(clicked()), this, SLOT(cmd_terminalMgmtSelection()));
    QObject::connect(ui->cmdBtn_testMgmt, SIGNAL(clicked()), this, SLOT(cmd_testCaseMgmtSelection()));    
    QObject::connect(ui->tb_main_content, SIGNAL(currentChanged(int)), this, SLOT(tabSelectionChanged(int)));

    m_interfaceHandlerCollection[ MainWindow::TAB_USER_MGMT ]       = new UserManagementInterfaceHandler( ui );
    m_interfaceHandlerCollection[ MainWindow::TAB_TERMINAL_MGMT ]   = new TerminalManagementInterfaceHandler( ui );
    m_interfaceHandlerCollection[ MainWindow::TAB_TEST_MGMT ]       = new TestManagementInterfaceHandler( ui );

    // By default user management screen will be
    // open in the begining
    ui->tb_main_content->setCurrentIndex( MainWindow::TAB_USER_MGMT );
    m_interfaceHandlerCollection[ MainWindow::TAB_USER_MGMT ]->interfaceEntered();
}

MainWindow::~MainWindow()
{
    delete ui;

    foreach(IUserInterfaceHandler* interface, m_interfaceHandlerCollection)
        delete interface;
}

void MainWindow::cmd_userMgmtSelection()
{
    ui->tb_main_content->setCurrentIndex( MainWindow::TAB_USER_MGMT );
}

void MainWindow::cmd_terminalMgmtSelection()
{
    ui->tb_main_content->setCurrentIndex( MainWindow::TAB_TERMINAL_MGMT );
}

void MainWindow::cmd_testCaseMgmtSelection()
{
    ui->tb_main_content->setCurrentIndex( MainWindow::TAB_TEST_MGMT );
}

void MainWindow::tabSelectionChanged(int currentIndex)
{
    switch( currentIndex )
    {
    case MainWindow::TAB_USER_MGMT:
        {
            m_interfaceHandlerCollection[ MainWindow::TAB_USER_MGMT ]->interfaceEntered();
        }
        break;
    case MainWindow::TAB_TERMINAL_MGMT:
        {
            m_interfaceHandlerCollection[ MainWindow::TAB_TERMINAL_MGMT ]->interfaceEntered();
        }
        break;
    case MainWindow::TAB_TEST_MGMT:
        {
            m_interfaceHandlerCollection[ MainWindow::TAB_TEST_MGMT ]->interfaceEntered();
        }
        break;
    }
}
