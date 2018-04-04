#ifndef IUSERINTERFACEHANDLER_H
#define IUSERINTERFACEHANDLER_H

#include <QObject>
#include "ui_mainwindow.h"

class IUserInterfaceHandler : public QObject
{
    Q_OBJECT
public:
    IUserInterfaceHandler(Ui::MainWindow* uiContext);

    virtual ~IUserInterfaceHandler();

public slots:
    virtual void interfaceEntered();

    virtual void interfaceExited();

protected:
    Ui::MainWindow* m_uiContext;

};

#endif // IUSERINTERFACEHANDLER_H
