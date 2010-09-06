#-------------------------------------------------
#
# Project created by QtCreator 2010-08-31T17:07:52
#
#-------------------------------------------------

QT       += core gui

TARGET = DropSendClient
TEMPLATE = app

#include dropsend library
INCLUDEPATH += ../DropSendCore/
LIBS += ../DropSendCore-build-desktop/libDropSendCore.a

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h
FORMS    += mainwindow.ui
