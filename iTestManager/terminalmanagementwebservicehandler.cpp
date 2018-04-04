#include "terminalmanagementwebservicehandler.h"

TerminalManagementWebServiceHandler::TerminalManagementWebServiceHandler()
{
    m_terminalCollection["Terminal1"] = TerminalInfo( "Terminal1", TerminalType::Desk3500 );
    m_terminalCollection["Terminal2"] = TerminalInfo( "Terminal2", TerminalType::Desk5000 );
    m_terminalCollection["Terminal3"] = TerminalInfo( "Terminal3", TerminalType::Move5000 );
    m_terminalCollection["Terminal4"] = TerminalInfo( "Terminal4", TerminalType::Lane5000 );
    m_terminalCollection["Terminal5"] = TerminalInfo( "Terminal5", TerminalType::Lane7000 );
}

void TerminalManagementWebServiceHandler::addTerminal(const UserInfo &user, const TerminalInfo &terminal)
{
    (void)user;
    m_terminalCollection[terminal.terminalName()] = terminal;

    emit userDataBaseChanged();
}

void TerminalManagementWebServiceHandler::removeTerminal(const UserInfo &user, const TerminalInfo &terminal)
{
    (void)user;

    if(m_terminalCollection.contains(terminal.terminalName()))
        m_terminalCollection.remove(terminal.terminalName());

    emit userDataBaseChanged();
}

void TerminalManagementWebServiceHandler::updateTerminal(const UserInfo &user, const TerminalInfo &terminal)
{
    (void)user;

    if(m_terminalCollection.contains(terminal.terminalName()))
        m_terminalCollection[terminal.terminalName()] = terminal;

    emit userDataBaseChanged();
}

QList<TerminalInfo> TerminalManagementWebServiceHandler::getListOfRegisteredTerminals(const UserInfo &user)
{
    (void)user;
    return m_terminalCollection.values();
}
