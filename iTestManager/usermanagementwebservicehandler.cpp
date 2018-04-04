#include "usermanagementwebservicehandler.h"

UserManagementWebServiceHandler::UserManagementWebServiceHandler()
{
    m_userCollection["apandya"] = UserInfo("Ashish Pandya" ,"apandya" );
    m_userCollection["user2"] = UserInfo("User Two" ,"user2" );
    m_userCollection["user3"] = UserInfo("User Three" ,"user3" );
}

UserManagementWebServiceHandler::~UserManagementWebServiceHandler()
{
}

void UserManagementWebServiceHandler::loginUser(const UserInfo &user)
{
    (void)user;
}

void UserManagementWebServiceHandler::registerUser(const UserInfo &user)
{    
    m_userCollection[user.userName()] = user;
    emit userDataBaseChanged();
}

void UserManagementWebServiceHandler::updateUser( const UserInfo &user )
{
    if( m_userCollection.contains( user.userName() ) )
    {
        m_userCollection[ user.userName() ] = user;
        emit userDataBaseChanged();
    }
}

void UserManagementWebServiceHandler::removeUser( const UserInfo &user )
{
    if( m_userCollection.contains( user.userName() ) )
    {
        m_userCollection.remove( user.userName() );
        emit userDataBaseChanged();
    }
}

QList<UserInfo> UserManagementWebServiceHandler::getListOfRegisteredUser()
{
    return m_userCollection.values();
}
