#-------------------------------------------------
#
# Project created by QtCreator 2010-09-02T08:56:04
#
#-------------------------------------------------

QT       += testlib
QT       -= gui

#include dropsend library
INCLUDEPATH += ../DropSendCore/
LIBS += ../DropSendCore-build-desktop/debug/libDropSendCore.a

TARGET = tst_remoteserveruserdao
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += \
    DAOTests.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"
