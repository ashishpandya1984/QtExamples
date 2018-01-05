/********************************************************************************
** Form generated from reading UI file 'sourceaddition.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCEADDITION_H
#define UI_SOURCEADDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SourceAddition
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *cb_sourceType;
    QLabel *label_3;
    QLineEdit *edit_sourceValue;
    QLineEdit *edit_sourceName;
    QFrame *frame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SourceAddition)
    {
        if (SourceAddition->objectName().isEmpty())
            SourceAddition->setObjectName(QStringLiteral("SourceAddition"));
        SourceAddition->resize(298, 163);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SourceAddition->sizePolicy().hasHeightForWidth());
        SourceAddition->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SourceAddition);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(SourceAddition);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cb_sourceType = new QComboBox(frame_2);
        cb_sourceType->setObjectName(QStringLiteral("cb_sourceType"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_sourceType->sizePolicy().hasHeightForWidth());
        cb_sourceType->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cb_sourceType, 2, 1, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        edit_sourceValue = new QLineEdit(frame_2);
        edit_sourceValue->setObjectName(QStringLiteral("edit_sourceValue"));

        gridLayout->addWidget(edit_sourceValue, 1, 1, 1, 1);

        edit_sourceName = new QLineEdit(frame_2);
        edit_sourceName->setObjectName(QStringLiteral("edit_sourceName"));

        gridLayout->addWidget(edit_sourceName, 0, 1, 1, 1);

        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 3, 0, 1, 2);


        verticalLayout->addWidget(frame_2);

        buttonBox = new QDialogButtonBox(SourceAddition);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SourceAddition);
        QObject::connect(buttonBox, SIGNAL(accepted()), SourceAddition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SourceAddition, SLOT(reject()));

        QMetaObject::connectSlotsByName(SourceAddition);
    } // setupUi

    void retranslateUi(QDialog *SourceAddition)
    {
        SourceAddition->setWindowTitle(QApplication::translate("SourceAddition", "Dialog", 0));
        label->setText(QApplication::translate("SourceAddition", "Name", 0));
        label_2->setText(QApplication::translate("SourceAddition", "Value", 0));
        cb_sourceType->clear();
        cb_sourceType->insertItems(0, QStringList()
         << QApplication::translate("SourceAddition", "Automatic", 0)
         << QApplication::translate("SourceAddition", "Manual", 0)
        );
        label_3->setText(QApplication::translate("SourceAddition", "Type", 0));
    } // retranslateUi

};

namespace Ui {
    class SourceAddition: public Ui_SourceAddition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEADDITION_H
