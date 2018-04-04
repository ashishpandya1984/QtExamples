#include "terminalinfo.h"

TerminalInfo::TerminalInfo()
{
}

TerminalInfo::TerminalInfo(const QString &terminalName, const TerminalType &terminalType,
                           const CommunicationType &commType, const QString &ipAddress, const QString &comPort)
    : m_terminalName( terminalName ), m_terminalType( terminalType ), m_communicationType( commType ), m_ipAddress( ipAddress ), m_comPort( comPort )
{
}

CommunicationType TerminalInfo::communicationType() const
{
    return m_communicationType;
}

void TerminalInfo::setCommunicationType(const CommunicationType &communicationType)
{
    m_communicationType = communicationType;
}

QString TerminalInfo::comPort() const
{
    return m_comPort;
}

void TerminalInfo::setComPort(const QString &comPort)
{
    m_comPort = comPort;
}

QString TerminalInfo::ipAddress() const
{
    return m_ipAddress;
}

void TerminalInfo::setIpAddress(const QString &ipAddress)
{
    m_ipAddress = ipAddress;
}

TerminalType TerminalInfo::terminalType() const
{
    return m_terminalType;
}

void TerminalInfo::setTerminalType(const TerminalType &terminalType)
{
    m_terminalType = terminalType;
}

QString TerminalInfo::terminalName() const
{
    return m_terminalName;
}

void TerminalInfo::setTerminalName(const QString &terminalName)
{
    m_terminalName = terminalName;
}

QString TerminalInfo::terminalTypeString(const TerminalType &type)
{
    switch( type )
    {
    case TerminalType::Desk3500:
        return QString("Desk3500");
    case TerminalType::Desk5000:
        return QString("Desk5000");
    case TerminalType::Move5000:
        return QString("Move5000");
    case TerminalType::Lane5000:
        return QString("Lane5000");
    case TerminalType::Lane7000:
        return QString("Lane7000");
    case TerminalType::Lane8000:
        return QString("Lane8000");
    case TerminalType::Link2500:
        return QString("Link2500");
    }

    return QString("Unknown Terminal");
}

QString TerminalInfo::communicationTypeString(const CommunicationType &commType)
{
    switch( commType )
    {
    case CommunicationType::ETHERNET_COMMUNICATION:
        return QString("Ethernet");
    case CommunicationType::SERIAL_COMMUNICATION:
        return QString("Serial");
    }

    return QString("Unknown Communication");
}
