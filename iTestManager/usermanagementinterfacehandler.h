#ifndef USERMANAGEMENTINTERFACEHANDLER_H
#define USERMANAGEMENTINTERFACEHANDLER_H

#include "iuserinterfacehandler.h"
#include "tabledatacollectionadaptor.h"
#include "usermanagementtabledatamodel.h"
#include "usermanagementwebservicehandler.h"

class UserManagementInterfaceHandler : public IUserInterfaceHandler, public TableDataCollectionAdaptor
{
    Q_OBJECT

public:
    UserManagementInterfaceHandler(Ui::MainWindow* uiContext);

    ~UserManagementInterfaceHandler();

protected slots:
    void interfaceEntered();

    void interfaceExited();

protected:
    void addSource(void *data);

public slots:
    void btnRegisterUserClicked();

    void itemSelectedForEdit(UserInfo user);

    void itemSelectedForRemove(UserInfo user);

private:
    UserManagementTableDataModel *m_userMgmtTableModel;

    UserManagementWebServiceHandler *m_userMgmtWebHandler;
};

#endif // USERMANAGEMENTINTERFACEHANDLER_H
