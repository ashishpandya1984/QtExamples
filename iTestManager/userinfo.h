#ifndef USERINFO_H
#define USERINFO_H

#include <QString>

class UserInfo
{
private:
    QString m_displayName;

    QString m_userName;

    QString m_password;

    QString m_confirmPassword;

public:
    UserInfo();

    UserInfo(const QString& displayName ,const QString& userName );

    UserInfo(const QString& displayName ,const QString& userName ,const QString& password, const QString& confirmPassword);

    QString userName() const;

    QString displayName() const;

    QString password() const;

    QString confirmPassword() const;
};

#endif // USERINFO_H
