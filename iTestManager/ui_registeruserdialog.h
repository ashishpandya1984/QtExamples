/********************************************************************************
** Form generated from reading UI file 'registeruserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERUSERDIALOG_H
#define UI_REGISTERUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterUserDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *le_displayName;
    QLabel *label_4;
    QLineEdit *le_userName;
    QLabel *label_2;
    QLineEdit *le_password;
    QLabel *label_3;
    QLineEdit *le_confirmPassword;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegisterUserDialog)
    {
        if (RegisterUserDialog->objectName().isEmpty())
            RegisterUserDialog->setObjectName(QStringLiteral("RegisterUserDialog"));
        RegisterUserDialog->resize(322, 172);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegisterUserDialog->sizePolicy().hasHeightForWidth());
        RegisterUserDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(RegisterUserDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(RegisterUserDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        le_displayName = new QLineEdit(frame);
        le_displayName->setObjectName(QStringLiteral("le_displayName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_displayName->sizePolicy().hasHeightForWidth());
        le_displayName->setSizePolicy(sizePolicy2);
        le_displayName->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_displayName);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        le_userName = new QLineEdit(frame);
        le_userName->setObjectName(QStringLiteral("le_userName"));
        sizePolicy2.setHeightForWidth(le_userName->sizePolicy().hasHeightForWidth());
        le_userName->setSizePolicy(sizePolicy2);
        le_userName->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, le_userName);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        le_password = new QLineEdit(frame);
        le_password->setObjectName(QStringLiteral("le_password"));
        sizePolicy2.setHeightForWidth(le_password->sizePolicy().hasHeightForWidth());
        le_password->setSizePolicy(sizePolicy2);
        le_password->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, le_password);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        le_confirmPassword = new QLineEdit(frame);
        le_confirmPassword->setObjectName(QStringLiteral("le_confirmPassword"));
        sizePolicy2.setHeightForWidth(le_confirmPassword->sizePolicy().hasHeightForWidth());
        le_confirmPassword->setSizePolicy(sizePolicy2);
        le_confirmPassword->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, le_confirmPassword);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(RegisterUserDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(RegisterUserDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegisterUserDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegisterUserDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegisterUserDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterUserDialog)
    {
        RegisterUserDialog->setWindowTitle(QApplication::translate("RegisterUserDialog", "User Registration", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("RegisterUserDialog", "Display Name", 0));
        label_4->setText(QApplication::translate("RegisterUserDialog", "User Name", 0));
        label_2->setText(QApplication::translate("RegisterUserDialog", "Password", 0));
        label_3->setText(QApplication::translate("RegisterUserDialog", "Confirm Password", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisterUserDialog: public Ui_RegisterUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERUSERDIALOG_H
