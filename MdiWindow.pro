#-------------------------------------------------
#
# Project created by QtCreator 2017-04-25T21:18:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MdiWindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    subwindowwidget.h \
    constants.h

FORMS    += mainwindow.ui

RESOURCES += \
    icons.qrc
