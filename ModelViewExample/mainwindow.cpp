#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QDialog>
#include "rqdatasourceselectionview.h"
#include "sourceaddition.h"
#include "rqglasswidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), m_tableView( 0 ),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout();
    m_tableView = new RQDataSourceSelectionView( 0 );

    layout->addWidget(m_tableView);
    ui->frm_tableView->setLayout(layout);

    QObject::connect(ui->btn_Add, SIGNAL(clicked()), this, SLOT(addDataToTable()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addDataToTable()
{
    RQGlassWidget *glassBackground = new RQGlassWidget(this);

    glassBackground->showGlass();
    {
        SourceAddition *srcAdditionDialog = new SourceAddition(this);

        if ( srcAdditionDialog->exec() == QDialog::Accepted )
        {
            if(m_tableView)
                m_tableView->addDataSource( srcAdditionDialog->sourceName(),
                                            srcAdditionDialog->sourceValue() ,
                                            srcAdditionDialog->sourceType());
        }
        delete srcAdditionDialog;
    }
    glassBackground->hideGlass();

    delete glassBackground;
}
