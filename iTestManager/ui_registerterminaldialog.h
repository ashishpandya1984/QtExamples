/********************************************************************************
** Form generated from reading UI file 'registerterminaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTERMINALDIALOG_H
#define UI_REGISTERTERMINALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterTerminalDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QComboBox *comboBox_4;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegisterTerminalDialog)
    {
        if (RegisterTerminalDialog->objectName().isEmpty())
            RegisterTerminalDialog->setObjectName(QStringLiteral("RegisterTerminalDialog"));
        RegisterTerminalDialog->resize(335, 204);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegisterTerminalDialog->sizePolicy().hasHeightForWidth());
        RegisterTerminalDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RegisterTerminalDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(RegisterTerminalDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy3);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_4);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_4);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_3);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy3.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy3);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_5);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_2);


        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(RegisterTerminalDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RegisterTerminalDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegisterTerminalDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegisterTerminalDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegisterTerminalDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterTerminalDialog)
    {
        RegisterTerminalDialog->setWindowTitle(QApplication::translate("RegisterTerminalDialog", "Terminal Registration", 0));
        groupBox_3->setTitle(QString());
        label_5->setText(QApplication::translate("RegisterTerminalDialog", "Terminal Name", 0));
        label_9->setText(QApplication::translate("RegisterTerminalDialog", "Terminal Type", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("RegisterTerminalDialog", "Desk3500", 0)
         << QApplication::translate("RegisterTerminalDialog", "Desk5000", 0)
         << QApplication::translate("RegisterTerminalDialog", "Move5000", 0)
         << QApplication::translate("RegisterTerminalDialog", "Lane5000", 0)
         << QApplication::translate("RegisterTerminalDialog", "Lane7000", 0)
         << QApplication::translate("RegisterTerminalDialog", "Lane8000", 0)
         << QApplication::translate("RegisterTerminalDialog", "Link2500", 0)
        );
        label_8->setText(QApplication::translate("RegisterTerminalDialog", "Communication Type", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("RegisterTerminalDialog", "Ethernet", 0)
         << QApplication::translate("RegisterTerminalDialog", "Serial", 0)
        );
        label_6->setText(QApplication::translate("RegisterTerminalDialog", "IP Address", 0));
        label_7->setText(QApplication::translate("RegisterTerminalDialog", "COM Port", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("RegisterTerminalDialog", "0", 0)
         << QApplication::translate("RegisterTerminalDialog", "1", 0)
         << QApplication::translate("RegisterTerminalDialog", "2", 0)
         << QApplication::translate("RegisterTerminalDialog", "3", 0)
         << QApplication::translate("RegisterTerminalDialog", "4", 0)
         << QApplication::translate("RegisterTerminalDialog", "5", 0)
         << QApplication::translate("RegisterTerminalDialog", "6", 0)
         << QApplication::translate("RegisterTerminalDialog", "7", 0)
         << QApplication::translate("RegisterTerminalDialog", "8", 0)
         << QApplication::translate("RegisterTerminalDialog", "9", 0)
         << QApplication::translate("RegisterTerminalDialog", "10", 0)
         << QApplication::translate("RegisterTerminalDialog", "11", 0)
         << QApplication::translate("RegisterTerminalDialog", "12", 0)
         << QApplication::translate("RegisterTerminalDialog", "13", 0)
         << QApplication::translate("RegisterTerminalDialog", "14", 0)
         << QApplication::translate("RegisterTerminalDialog", "15", 0)
         << QApplication::translate("RegisterTerminalDialog", "16", 0)
         << QApplication::translate("RegisterTerminalDialog", "17", 0)
         << QApplication::translate("RegisterTerminalDialog", "18", 0)
         << QApplication::translate("RegisterTerminalDialog", "19", 0)
         << QApplication::translate("RegisterTerminalDialog", "20", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class RegisterTerminalDialog: public Ui_RegisterTerminalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTERMINALDIALOG_H
