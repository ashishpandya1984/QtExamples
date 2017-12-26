#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), m_toolTip (0),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_toolTip = new RQToolTip();

    ui->m_pushButton->installEventFilter(m_toolTip);
    ui->m_pushButton->setToolTip("This is tooltip!");
}

MainWindow::~MainWindow()
{
    if(ui)
        delete ui;

    if(m_toolTip)
        delete m_toolTip;
}

