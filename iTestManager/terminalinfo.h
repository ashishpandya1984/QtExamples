#ifndef TERMINALINFO_H
#define TERMINALINFO_H

#include <QString>

enum TerminalType
{
    Desk3500,
    Desk5000,
    Move5000,
    Lane5000,
    Lane7000,
    Lane8000,
    Link2500
};

enum CommunicationType
{
    ETHERNET_COMMUNICATION,
    SERIAL_COMMUNICATION
};

class TerminalInfo
{
public:
    TerminalInfo();

    TerminalInfo( const QString& terminalName, const TerminalType& terminalType, const CommunicationType& commType = CommunicationType::ETHERNET_COMMUNICATION,
                  const QString& ipAddress = "0.0.0.0", const QString& comPort = "0");

    QString terminalName() const;

    void setTerminalName(const QString &terminalName);

    TerminalType terminalType() const;

    void setTerminalType(const TerminalType &terminalType);

    QString ipAddress() const;

    void setIpAddress(const QString &ipAddress);

    QString comPort() const;

    void setComPort(const QString &comPort);

    CommunicationType communicationType() const;

    void setCommunicationType(const CommunicationType &communicationType);

    static QString terminalTypeString( const TerminalType& type );

    static QString communicationTypeString( const CommunicationType& commType );

private:
    QString m_terminalName;

    TerminalType m_terminalType;

    QString m_ipAddress;

    QString m_comPort;

    CommunicationType m_communicationType;
};

#endif // TERMINALINFO_H
