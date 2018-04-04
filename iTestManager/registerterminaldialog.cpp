#include "registerterminaldialog.h"
#include "ui_registerterminaldialog.h"

RegisterTerminalDialog::RegisterTerminalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTerminalDialog)
{
    ui->setupUi(this);
}

RegisterTerminalDialog::~RegisterTerminalDialog()
{
    delete ui;
}
