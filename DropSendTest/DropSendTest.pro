#-------------------------------------------------
#
# Project created by QtCreator 2010-09-02T08:56:04
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_remoteserveruserdao
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    DAOTests.cpp \
    user.cpp \
    sentfile.cpp \
    remoteserveruserdao.cpp \
    remoteserversentfiledao.cpp \
    remoteserverreceivedfiledao.cpp \
    remoteserverplandao.cpp \
    remoteserveraccountdao.cpp \
    receivedfile.cpp \
    plan.cpp \
    filewithsender.cpp \
    file.cpp \
    entitywithid.cpp \
    account.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    user.h \
    sentfile.h \
    remoteserveruserdao.h \
    remoteserversentfiledao.h \
    remoteserverreceivedfiledao.h \
    remoteserverplandao.h \
    remoteserveraccountdao.h \
    receivedfile.h \
    plan.h \
    iuserrelateddao.h \
    iuserdao.h \
    isentfiledao.h \
    ireceivedfiledao.h \
    iplandao.h \
    ientitydao.h \
    iaccountdao.h \
    filewithsender.h \
    file.h \
    entitywithid.h \
    account.h
