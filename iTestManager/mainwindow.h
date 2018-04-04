#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

class IUserInterfaceHandler;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    enum TabSelection
    {
        TAB_USER_MGMT = 0,
        TAB_TERMINAL_MGMT,
        TAB_TEST_MGMT
    };
    
public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

public slots:
    void cmd_userMgmtSelection();

    void cmd_terminalMgmtSelection();

    void cmd_testCaseMgmtSelection();

    void tabSelectionChanged(int currentIndex);
    
private:
    Ui::MainWindow *ui;

    QMap<MainWindow::TabSelection, IUserInterfaceHandler*> m_interfaceHandlerCollection;
};

#endif // MAINWINDOW_H
