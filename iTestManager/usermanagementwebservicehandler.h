#ifndef USERMANAGEMENTWEBSERVICEHANDLER_H
#define USERMANAGEMENTWEBSERVICEHANDLER_H

#include <QMap>
#include "iwebservicehandler.h"
#include "userinfo.h"

class UserManagementWebServiceHandler : public IWebServiceHandler
{
    Q_OBJECT
public:
    UserManagementWebServiceHandler();

    ~UserManagementWebServiceHandler();

    void loginUser( const UserInfo& user );

    void registerUser( const UserInfo& user );

    void updateUser( const UserInfo& user );

    void removeUser( const UserInfo& user );

    QList<UserInfo> getListOfRegisteredUser();

signals:
    void userDataBaseChanged();

private:
    QMap<QString,UserInfo> m_userCollection;
};

#endif // USERMANAGEMENTWEBSERVICEHANDLER_H
