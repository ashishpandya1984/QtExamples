/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_9;
    QFrame *frm_main;
    QGridLayout *gridLayout;
    QFrame *frm_mainOption;
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *cmdBtn_usrMgmt;
    QCommandLinkButton *cmdBtn_termMgmt;
    QCommandLinkButton *cmdBtn_testMgmt;
    QFrame *frame_4;
    QFrame *ln_devider;
    QFrame *frm_mainContent;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tb_main_content;
    QWidget *tab_user_management;
    QVBoxLayout *verticalLayout_16;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTableView *tv_user_management;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_15;
    QPushButton *btn_register_usr;
    QWidget *tab_terminal_management;
    QVBoxLayout *verticalLayout_20;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_4;
    QTableView *tv_terminal_management;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_19;
    QPushButton *btn_register_terminal;
    QWidget *tab_test_case_management;
    QVBoxLayout *verticalLayout_24;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QComboBox *comboBox_6;
    QLabel *label_12;
    QComboBox *comboBox_7;
    QLabel *label_13;
    QComboBox *comboBox_8;
    QPushButton *btn_search_tests;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_5;
    QTableView *tv_test_cases;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_23;
    QPushButton *btn_execute_selected_tests;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1084, 726);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/iTestManager.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_9 = new QVBoxLayout(centralWidget);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        frm_main = new QFrame(centralWidget);
        frm_main->setObjectName(QStringLiteral("frm_main"));
        frm_main->setFrameShape(QFrame::StyledPanel);
        frm_main->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frm_main);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frm_mainOption = new QFrame(frm_main);
        frm_mainOption->setObjectName(QStringLiteral("frm_mainOption"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frm_mainOption->sizePolicy().hasHeightForWidth());
        frm_mainOption->setSizePolicy(sizePolicy);
        frm_mainOption->setFrameShape(QFrame::StyledPanel);
        frm_mainOption->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frm_mainOption);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cmdBtn_usrMgmt = new QCommandLinkButton(frm_mainOption);
        cmdBtn_usrMgmt->setObjectName(QStringLiteral("cmdBtn_usrMgmt"));
        cmdBtn_usrMgmt->setCheckable(false);
        cmdBtn_usrMgmt->setChecked(false);

        verticalLayout->addWidget(cmdBtn_usrMgmt);

        cmdBtn_termMgmt = new QCommandLinkButton(frm_mainOption);
        cmdBtn_termMgmt->setObjectName(QStringLiteral("cmdBtn_termMgmt"));
        cmdBtn_termMgmt->setCheckable(false);

        verticalLayout->addWidget(cmdBtn_termMgmt);

        cmdBtn_testMgmt = new QCommandLinkButton(frm_mainOption);
        cmdBtn_testMgmt->setObjectName(QStringLiteral("cmdBtn_testMgmt"));
        cmdBtn_testMgmt->setCheckable(false);

        verticalLayout->addWidget(cmdBtn_testMgmt);

        frame_4 = new QFrame(frm_mainOption);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_4);


        gridLayout->addWidget(frm_mainOption, 0, 0, 1, 1);

        ln_devider = new QFrame(frm_main);
        ln_devider->setObjectName(QStringLiteral("ln_devider"));
        ln_devider->setFrameShape(QFrame::VLine);
        ln_devider->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(ln_devider, 0, 1, 1, 1);

        frm_mainContent = new QFrame(frm_main);
        frm_mainContent->setObjectName(QStringLiteral("frm_mainContent"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(90);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frm_mainContent->sizePolicy().hasHeightForWidth());
        frm_mainContent->setSizePolicy(sizePolicy2);
        frm_mainContent->setFrameShape(QFrame::StyledPanel);
        frm_mainContent->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frm_mainContent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tb_main_content = new QTabWidget(frm_mainContent);
        tb_main_content->setObjectName(QStringLiteral("tb_main_content"));
        tab_user_management = new QWidget();
        tab_user_management->setObjectName(QStringLiteral("tab_user_management"));
        verticalLayout_16 = new QVBoxLayout(tab_user_management);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(5, 5, 5, 0);
        frame_8 = new QFrame(tab_user_management);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_8);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(frame_8);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(95);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        tv_user_management = new QTableView(groupBox_3);
        tv_user_management->setObjectName(QStringLiteral("tv_user_management"));
        tv_user_management->setFocusPolicy(Qt::WheelFocus);
        tv_user_management->setAlternatingRowColors(true);
        tv_user_management->setSelectionMode(QAbstractItemView::SingleSelection);
        tv_user_management->setSelectionBehavior(QAbstractItemView::SelectRows);
        tv_user_management->setShowGrid(false);
        tv_user_management->horizontalHeader()->setDefaultSectionSize(200);
        tv_user_management->horizontalHeader()->setMinimumSectionSize(200);
        tv_user_management->horizontalHeader()->setStretchLastSection(true);
        tv_user_management->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tv_user_management);

        frame_9 = new QFrame(groupBox_3);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy4);
        frame_9->setLayoutDirection(Qt::RightToLeft);
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_9);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 5, 0, 0);
        btn_register_usr = new QPushButton(frame_9);
        btn_register_usr->setObjectName(QStringLiteral("btn_register_usr"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btn_register_usr->sizePolicy().hasHeightForWidth());
        btn_register_usr->setSizePolicy(sizePolicy5);
        btn_register_usr->setMinimumSize(QSize(120, 30));

        verticalLayout_15->addWidget(btn_register_usr);


        verticalLayout_3->addWidget(frame_9);


        verticalLayout_13->addWidget(groupBox_3);


        verticalLayout_16->addWidget(frame_8);

        tb_main_content->addTab(tab_user_management, QString());
        tab_terminal_management = new QWidget();
        tab_terminal_management->setObjectName(QStringLiteral("tab_terminal_management"));
        verticalLayout_20 = new QVBoxLayout(tab_terminal_management);
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(5, 5, 5, 0);
        frame_10 = new QFrame(tab_terminal_management);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_10);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(frame_10);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy3.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy3);
        verticalLayout_4 = new QVBoxLayout(groupBox_7);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        tv_terminal_management = new QTableView(groupBox_7);
        tv_terminal_management->setObjectName(QStringLiteral("tv_terminal_management"));
        tv_terminal_management->setAlternatingRowColors(true);
        tv_terminal_management->setSelectionMode(QAbstractItemView::SingleSelection);
        tv_terminal_management->setSelectionBehavior(QAbstractItemView::SelectRows);
        tv_terminal_management->setShowGrid(false);
        tv_terminal_management->horizontalHeader()->setDefaultSectionSize(200);
        tv_terminal_management->horizontalHeader()->setMinimumSectionSize(200);
        tv_terminal_management->horizontalHeader()->setStretchLastSection(true);
        tv_terminal_management->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tv_terminal_management);

        frame_11 = new QFrame(groupBox_7);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setLayoutDirection(Qt::RightToLeft);
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_19 = new QVBoxLayout(frame_11);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 5, 0, 0);
        btn_register_terminal = new QPushButton(frame_11);
        btn_register_terminal->setObjectName(QStringLiteral("btn_register_terminal"));
        sizePolicy5.setHeightForWidth(btn_register_terminal->sizePolicy().hasHeightForWidth());
        btn_register_terminal->setSizePolicy(sizePolicy5);
        btn_register_terminal->setMinimumSize(QSize(120, 30));

        verticalLayout_19->addWidget(btn_register_terminal);


        verticalLayout_4->addWidget(frame_11);


        verticalLayout_17->addWidget(groupBox_7);


        verticalLayout_20->addWidget(frame_10);

        tb_main_content->addTab(tab_terminal_management, QString());
        tab_test_case_management = new QWidget();
        tab_test_case_management->setObjectName(QStringLiteral("tab_test_case_management"));
        verticalLayout_24 = new QVBoxLayout(tab_test_case_management);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(5, 5, 5, 0);
        frame_12 = new QFrame(tab_test_case_management);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_21 = new QVBoxLayout(frame_12);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(frame_12);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(5);
        sizePolicy6.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy6);
        horizontalLayout_5 = new QHBoxLayout(groupBox_8);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(label_11);

        comboBox_6 = new QComboBox(groupBox_8);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        horizontalLayout_5->addWidget(comboBox_6);

        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy7.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(label_12);

        comboBox_7 = new QComboBox(groupBox_8);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));

        horizontalLayout_5->addWidget(comboBox_7);

        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy7.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(label_13);

        comboBox_8 = new QComboBox(groupBox_8);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));

        horizontalLayout_5->addWidget(comboBox_8);

        btn_search_tests = new QPushButton(groupBox_8);
        btn_search_tests->setObjectName(QStringLiteral("btn_search_tests"));
        sizePolicy5.setHeightForWidth(btn_search_tests->sizePolicy().hasHeightForWidth());
        btn_search_tests->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(btn_search_tests);


        verticalLayout_21->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(frame_12);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        sizePolicy3.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy3);
        verticalLayout_5 = new QVBoxLayout(groupBox_9);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        tv_test_cases = new QTableView(groupBox_9);
        tv_test_cases->setObjectName(QStringLiteral("tv_test_cases"));
        tv_test_cases->setAlternatingRowColors(true);
        tv_test_cases->setSelectionMode(QAbstractItemView::MultiSelection);
        tv_test_cases->setSelectionBehavior(QAbstractItemView::SelectRows);
        tv_test_cases->setShowGrid(false);
        tv_test_cases->horizontalHeader()->setDefaultSectionSize(200);
        tv_test_cases->horizontalHeader()->setMinimumSectionSize(200);
        tv_test_cases->horizontalHeader()->setStretchLastSection(true);
        tv_test_cases->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tv_test_cases);

        frame_13 = new QFrame(groupBox_9);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setLayoutDirection(Qt::RightToLeft);
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(frame_13);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 5, 0, 0);
        btn_execute_selected_tests = new QPushButton(frame_13);
        btn_execute_selected_tests->setObjectName(QStringLiteral("btn_execute_selected_tests"));
        sizePolicy5.setHeightForWidth(btn_execute_selected_tests->sizePolicy().hasHeightForWidth());
        btn_execute_selected_tests->setSizePolicy(sizePolicy5);
        btn_execute_selected_tests->setMinimumSize(QSize(120, 30));

        verticalLayout_23->addWidget(btn_execute_selected_tests);


        verticalLayout_5->addWidget(frame_13);


        verticalLayout_21->addWidget(groupBox_9);


        verticalLayout_24->addWidget(frame_12);

        tb_main_content->addTab(tab_test_case_management, QString());

        verticalLayout_2->addWidget(tb_main_content);


        gridLayout->addWidget(frm_mainContent, 0, 2, 1, 1);


        verticalLayout_9->addWidget(frm_main);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1084, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tb_main_content->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iTestManager", 0));
        cmdBtn_usrMgmt->setText(QApplication::translate("MainWindow", "User Management", 0));
        cmdBtn_termMgmt->setText(QApplication::translate("MainWindow", "Terminal Management", 0));
        cmdBtn_testMgmt->setText(QApplication::translate("MainWindow", "Test Management", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Registered Users", 0));
        btn_register_usr->setText(QApplication::translate("MainWindow", "Register New User", 0));
        tb_main_content->setTabText(tb_main_content->indexOf(tab_user_management), QApplication::translate("MainWindow", "User Management", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Manage Terminals", 0));
        btn_register_terminal->setText(QApplication::translate("MainWindow", "Register New Terminal", 0));
        tb_main_content->setTabText(tb_main_content->indexOf(tab_terminal_management), QApplication::translate("MainWindow", "Terminal Management", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Test Case Filter", 0));
        label_11->setText(QApplication::translate("MainWindow", "Host", 0));
        label_12->setText(QApplication::translate("MainWindow", "SDK", 0));
        label_13->setText(QApplication::translate("MainWindow", "Search Criteria", 0));
        btn_search_tests->setText(QApplication::translate("MainWindow", "Search", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Test Cases", 0));
        btn_execute_selected_tests->setText(QApplication::translate("MainWindow", "Excute Selected Tests", 0));
        tb_main_content->setTabText(tb_main_content->indexOf(tab_test_case_management), QApplication::translate("MainWindow", "Test Management", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
