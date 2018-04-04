#include "usermanagementinterfacehandler.h"
#include "registeruserdialog.h"
#include "tablecelltextitem.h"
#include "tablecellactionbuttonitem.h"

UserManagementInterfaceHandler::UserManagementInterfaceHandler(Ui::MainWindow *uiContext)
    : IUserInterfaceHandler( uiContext )
{
    m_userMgmtTableModel = new UserManagementTableDataModel( this,
                                                             QList<QString>() << "Display Name" << "User" << "Edit" << "Remove",
                                                             m_uiContext->tv_user_management );

    m_uiContext->tv_user_management->setModel( m_userMgmtTableModel );
    m_userMgmtWebHandler = new UserManagementWebServiceHandler();

    QObject::connect( m_uiContext->btn_register_usr, SIGNAL(clicked()), this, SLOT(btnRegisterUserClicked()) );
    QObject::connect( m_userMgmtWebHandler, SIGNAL(userDataBaseChanged()), this, SLOT(interfaceEntered()) );

    QObject::connect( m_userMgmtTableModel, SIGNAL(dataSelectedForEdit(UserInfo)) , this , SLOT(itemSelectedForEdit(UserInfo)));
    QObject::connect( m_userMgmtTableModel, SIGNAL(dataSelectedForRemove(UserInfo)) , this , SLOT(itemSelectedForRemove(UserInfo)));
}

UserManagementInterfaceHandler::~UserManagementInterfaceHandler()
{
    if( m_userMgmtWebHandler )
        delete m_userMgmtWebHandler, m_userMgmtWebHandler = 0;

    if( m_userMgmtTableModel )
        delete m_userMgmtTableModel, m_userMgmtTableModel = 0;
}

void UserManagementInterfaceHandler::interfaceEntered()
{
    m_dataCollection.clear();
    QList<UserInfo> registeredUsers = m_userMgmtWebHandler->getListOfRegisteredUser();

    foreach(UserInfo user, registeredUsers){
        addSource(&user);
    }

    m_userMgmtTableModel->refresh();
}

void UserManagementInterfaceHandler::interfaceExited()
{
}

void UserManagementInterfaceHandler::addSource(void *data)
{
    UserInfo *user = static_cast<UserInfo*>(data);

    QList<TableCellDataItem*> sourceItem;

    sourceItem << new TableCellTextItem( user->displayName() , m_dataCollection.count(), 0);
    sourceItem << new TableCellTextItem( user->userName() , m_dataCollection.count(), 1);
    sourceItem << new TableCellActionButtonItem( "Edit", m_dataCollection.count(), 2);
    sourceItem << new TableCellActionButtonItem( "Remove", m_dataCollection.count(), 3);

    m_dataCollection << sourceItem;
}

void UserManagementInterfaceHandler::btnRegisterUserClicked()
{
    RegisterUserDialog dlg;

    if( dlg.exec() == QDialog::Accepted ){
        m_userMgmtWebHandler->registerUser( dlg.getUserInfo() );
    }
}

void UserManagementInterfaceHandler::itemSelectedForEdit( UserInfo user )
{
    RegisterUserDialog dlg( user );

    if( dlg.exec() == QDialog::Accepted ){
        m_userMgmtWebHandler->registerUser( dlg.getUserInfo() );
    }
}

void UserManagementInterfaceHandler::itemSelectedForRemove( UserInfo user )
{    
    m_userMgmtWebHandler->removeUser( user );
}
