#ifndef TERMINALMANAGEMENTWEBSERVICEHANDLER_H
#define TERMINALMANAGEMENTWEBSERVICEHANDLER_H

#include <QList>
#include <QMap>
#include "iwebservicehandler.h"
#include "userinfo.h"
#include "terminalinfo.h"


class TerminalManagementWebServiceHandler: public IWebServiceHandler
{
    Q_OBJECT

public:
    TerminalManagementWebServiceHandler();

    void addTerminal( const UserInfo& user, const TerminalInfo& terminal );

    void removeTerminal( const UserInfo& user, const TerminalInfo& terminal );

    void updateTerminal( const UserInfo& user, const TerminalInfo& terminal );

    QList<TerminalInfo> getListOfRegisteredTerminals( const UserInfo& user );

signals:
    void userDataBaseChanged();

private:
    QMap<QString, TerminalInfo> m_terminalCollection;
};

#endif // TERMINALMANAGEMENTWEBSERVICEHANDLER_H
