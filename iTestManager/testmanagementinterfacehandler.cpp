#include <QMessageBox>
#include "testmanagementinterfacehandler.h"

TestManagementInterfaceHandler::TestManagementInterfaceHandler(Ui::MainWindow *uiContext)
    : IUserInterfaceHandler( uiContext )
{
    QObject::connect( m_uiContext->btn_search_tests, SIGNAL(clicked()), this, SLOT(btnSearchTestsClicked()) );
    QObject::connect( m_uiContext->btn_execute_selected_tests, SIGNAL(clicked()), this, SLOT(btnExecuteTestsClicked()) );
}

TestManagementInterfaceHandler::~TestManagementInterfaceHandler()
{
}

void TestManagementInterfaceHandler::interfaceEntered()
{
}

void TestManagementInterfaceHandler::interfaceExited()
{
}

void TestManagementInterfaceHandler::btnExecuteTestsClicked()
{
    QMessageBox::information(0, tr("iTestManager"), tr("Execute tests functionality clicked"), QMessageBox::Ok);
}

void TestManagementInterfaceHandler::btnSearchTestsClicked()
{
    QMessageBox::information(0, tr("iTestManager"), tr("Search functionality clicked"), QMessageBox::Ok);
}
