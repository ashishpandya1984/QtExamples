#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class RQDataSourceSelectionView;
class SourceAddition;
class RQGlassWidget;

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
    void openSourceAdditionDialog();

private:
    Ui::MainWindow *ui;

    RQDataSourceSelectionView *m_tableView;

    SourceAddition *m_srcAdditionDialog;

    RQGlassWidget *m_glassBackground;
};

#endif // MAINWINDOW_H
