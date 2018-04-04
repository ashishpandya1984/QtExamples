#include "userinfo.h"

UserInfo::UserInfo()
{
}

UserInfo::UserInfo(const QString &displayName, const QString &userName)
    : m_userName( userName ), m_displayName( displayName )
{
}

UserInfo::UserInfo(const QString &displayName, const QString &userName, const QString &password, const QString &confirmPassword)
    : m_userName( userName ), m_displayName( displayName ), m_password( password ), m_confirmPassword( confirmPassword )
{
}

QString UserInfo::userName() const
{
    return m_userName;
}

QString UserInfo::displayName() const
{
    return m_displayName;
}


QString UserInfo::password() const
{
    return m_password;
}

QString UserInfo::confirmPassword() const
{
    return m_confirmPassword;
}
