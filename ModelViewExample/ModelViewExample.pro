#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T15:53:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ModelViewExample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rqdatasourceselectionview.cpp \
    rqdatasourcetablemodel.cpp \
    roadatamodel.cpp \
    rqradiobuttonitemdelegate.cpp \
    roasourceitem.cpp

HEADERS  += mainwindow.h \
    rqdatasourceselectionview.h \
    rqdatasourcetablemodel.h \
    roadatamodel.h \
    rqradiobuttonitemdelegate.h \
    roasourceitem.h

FORMS    += mainwindow.ui
