#ifndef REGISTERTERMINALDIALOG_H
#define REGISTERTERMINALDIALOG_H

#include <QDialog>

namespace Ui {
class RegisterTerminalDialog;
}

class RegisterTerminalDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit RegisterTerminalDialog(QWidget *parent = 0);
    ~RegisterTerminalDialog();
    
private:
    Ui::RegisterTerminalDialog *ui;
};

#endif // REGISTERTERMINALDIALOG_H
