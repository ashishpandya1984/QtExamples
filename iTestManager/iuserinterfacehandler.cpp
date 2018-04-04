#include "iuserinterfacehandler.h"

IUserInterfaceHandler::IUserInterfaceHandler(Ui::MainWindow* uiContext) :
    m_uiContext(uiContext)
{
}

IUserInterfaceHandler::~IUserInterfaceHandler()
{
}

void IUserInterfaceHandler::interfaceEntered()
{
}

void IUserInterfaceHandler::interfaceExited()
{
}
