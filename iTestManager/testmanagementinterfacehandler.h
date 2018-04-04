#ifndef TESTMANAGEMENTINTERFACEHANDLER_H
#define TESTMANAGEMENTINTERFACEHANDLER_H

#include "iuserinterfacehandler.h"

class TestManagementInterfaceHandler : public IUserInterfaceHandler
{
    Q_OBJECT

public:
    TestManagementInterfaceHandler(Ui::MainWindow* uiContext);

    ~TestManagementInterfaceHandler();

protected:
    void interfaceEntered();

    void interfaceExited();

public slots:
    void btnExecuteTestsClicked();

    void btnSearchTestsClicked();
};

#endif // TESTMANAGEMENTINTERFACEHANDLER_H
