#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class RQDataSourceSelectionView;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

public slots:
    void addDataToTable();

private:
    Ui::MainWindow *ui;

    RQDataSourceSelectionView *m_tableView;    
};

#endif // MAINWINDOW_H
