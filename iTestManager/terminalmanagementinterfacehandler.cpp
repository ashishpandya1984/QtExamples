#include "terminalmanagementinterfacehandler.h"
#include "registerterminaldialog.h"
#include "tablecelltextitem.h"
#include "tablecellactionbuttonitem.h"

TerminalManagementInterfaceHandler::TerminalManagementInterfaceHandler(Ui::MainWindow *uiContext)
    :IUserInterfaceHandler( uiContext )
{
    m_webServiceHandler = new TerminalManagementWebServiceHandler();
    m_tableDataModel    = new TerminalManagementTableDataModel( this, QList<QString>()<< "Terminal Name" << "Terminal Type" << "Communication Type"
                                                             << "IP Address" << "COM Port" << "Test Connection" << "Edit" << "Remove", m_uiContext->tv_terminal_management );

    m_uiContext->tv_terminal_management->setModel( m_tableDataModel );

    QObject::connect( m_uiContext->btn_register_terminal, SIGNAL(clicked()), this, SLOT(btnRegisterTerminalClicked()));
    QObject::connect( m_webServiceHandler, SIGNAL(userDataBaseChanged()), this, SLOT(interfaceEntered()) );
}

TerminalManagementInterfaceHandler::~TerminalManagementInterfaceHandler()
{
}

void TerminalManagementInterfaceHandler::interfaceEntered()
{
    m_dataCollection.clear();

    QList<TerminalInfo> registeredTerminals = m_webServiceHandler->getListOfRegisteredTerminals( UserInfo() );

    foreach( TerminalInfo terminal, registeredTerminals )
        addSource( &terminal );

    m_tableDataModel->refresh();
}

void TerminalManagementInterfaceHandler::interfaceExited()
{
}

void TerminalManagementInterfaceHandler::addSource(void *data)
{
    TerminalInfo *terminal = static_cast<TerminalInfo*>(data);

    QList<TableCellDataItem*> sourceItem;

    sourceItem << new TableCellTextItem( terminal->terminalName() , m_dataCollection.count(), 0);
    sourceItem << new TableCellTextItem( TerminalInfo::terminalTypeString( terminal->terminalType() ), m_dataCollection.count(), 1);
    sourceItem << new TableCellTextItem( TerminalInfo::communicationTypeString( terminal->communicationType() ), m_dataCollection.count(), 2);
    sourceItem << new TableCellTextItem( terminal->ipAddress() , m_dataCollection.count(), 3);
    sourceItem << new TableCellTextItem( QString("COM %1").arg(terminal->comPort()) , m_dataCollection.count(), 4);
    sourceItem << new TableCellActionButtonItem( "Test", m_dataCollection.count(), 5);
    sourceItem << new TableCellActionButtonItem( "Edit", m_dataCollection.count(), 6);
    sourceItem << new TableCellActionButtonItem( "Remove", m_dataCollection.count(), 7);

    m_dataCollection << sourceItem;
}

void TerminalManagementInterfaceHandler::btnRegisterTerminalClicked()
{
    RegisterTerminalDialog dlg;
    dlg.exec();
}
