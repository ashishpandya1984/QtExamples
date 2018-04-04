#-------------------------------------------------
#
# Project created by QtCreator 2018-03-21T14:52:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = iTestManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    registeruserdialog.cpp \
    registerterminaldialog.cpp \
    iuserinterfacehandler.cpp \
    usermanagementinterfacehandler.cpp \
    terminalmanagementinterfacehandler.cpp \
    testmanagementinterfacehandler.cpp \
    iwebservicehandler.cpp \
    usermanagementwebservicehandler.cpp \
    userinfo.cpp \
    tablecelldataitem.cpp \
    tablecellcheckableitem.cpp \
    tabledatacollectionadaptor.cpp \
    tablecelltextitem.cpp \
    tablecelldropdownitem.cpp \
    tabledatamodel.cpp \
    usermanagementtabledatamodel.cpp \
    tablecellactionbuttonitem.cpp \
    terminalinfo.cpp \
    terminalmanagementwebservicehandler.cpp \
    terminalmanagementtabledatamodel.cpp

HEADERS  += mainwindow.h \
    registeruserdialog.h \
    registerterminaldialog.h \
    iuserinterfacehandler.h \
    usermanagementinterfacehandler.h \
    terminalmanagementinterfacehandler.h \
    testmanagementinterfacehandler.h \
    iwebservicehandler.h \
    usermanagementwebservicehandler.h \
    userinfo.h \
    tablecelldataitem.h \
    tablecellcheckableitem.h \
    tabledatacollectionadaptor.h \
    tablecelltextitem.h \
    tablecelldropdownitem.h \
    tabledatamodel.h \
    usermanagementtabledatamodel.h \
    tablecellactionbuttonitem.h \
    terminalinfo.h \
    terminalmanagementwebservicehandler.h \
    terminalmanagementtabledatamodel.h

FORMS    += mainwindow.ui \
    registeruserdialog.ui \
    registerterminaldialog.ui

RESOURCES += \
    resources.qrc
