#include "registeruserdialog.h"
#include "ui_registeruserdialog.h"

RegisterUserDialog::RegisterUserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterUserDialog)
{
    ui->setupUi(this);
}

RegisterUserDialog::RegisterUserDialog(UserInfo user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterUserDialog)
{
    ui->setupUi(this);
    ui->le_displayName->setText( user.displayName() );

    ui->le_userName->setText( user.userName() );
    ui->le_userName->setEnabled( false );
}

RegisterUserDialog::~RegisterUserDialog()
{
    delete ui;
}

UserInfo RegisterUserDialog::getUserInfo()
{
    return UserInfo(ui->le_displayName->text(), ui->le_userName->text(), ui->le_password->text(), ui->le_confirmPassword->text());
}

