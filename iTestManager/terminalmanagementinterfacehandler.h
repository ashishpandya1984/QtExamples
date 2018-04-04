#ifndef TERMINALMANAGEMENTINTERFACEHANDLER_H
#define TERMINALMANAGEMENTINTERFACEHANDLER_H

#include "iuserinterfacehandler.h"
#include "tabledatacollectionadaptor.h"
#include "terminalmanagementwebservicehandler.h"
#include "terminalmanagementtabledatamodel.h"
#include "terminalinfo.h"

class TerminalManagementInterfaceHandler : public IUserInterfaceHandler, public TableDataCollectionAdaptor
{
    Q_OBJECT

public:
    TerminalManagementInterfaceHandler(Ui::MainWindow* uiContext);

    ~TerminalManagementInterfaceHandler();

protected:
    void interfaceEntered();

    void interfaceExited();

    void addSource( void *data );

public slots:
    void btnRegisterTerminalClicked();

private:
    TerminalManagementWebServiceHandler *m_webServiceHandler;

    TerminalManagementTableDataModel *m_tableDataModel;
};

#endif // TERMINALMANAGEMENTINTERFACEHANDLER_H
