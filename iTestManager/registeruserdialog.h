#ifndef REGISTERUSERDIALOG_H
#define REGISTERUSERDIALOG_H

#include <QDialog>
#include "userinfo.h"

namespace Ui {
class RegisterUserDialog;
}

class RegisterUserDialog : public QDialog
{
    Q_OBJECT
    
public:
    RegisterUserDialog(QWidget *parent = 0);

     RegisterUserDialog(UserInfo user, QWidget *parent = 0);

    ~RegisterUserDialog();

    UserInfo getUserInfo();
    
private:
    Ui::RegisterUserDialog *ui;
};

#endif // REGISTERUSERDIALOG_H
