#-------------------------------------------------
#
# Project created by QtCreator 2010-08-31T17:07:52
#
#-------------------------------------------------

QT       += core gui

TARGET = DropSendClient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    account.cpp \
    plan.cpp \
    entitywithid.cpp \
    file.cpp \
    receivedfile.cpp \
    filewithsender.cpp \
    sentfile.cpp \
    abstractentityfactory.cpp \
    remoteserveruserdao.cpp \
    remoteserverentityfactory.cpp \
    remoteserverreceivedfiledao.cpp \
    remoteserversentfiledao.cpp \
    remoteserveraccountdao.cpp \    
    remoteserverplandao.cpp \
    client.cpp \
    dropsendservice.cpp \
    debughelper.cpp

HEADERS  += mainwindow.h \
    user.h \
    account.h \
    plan.h \
    entitywithid.h \
    file.h \
    receivedfile.h \
    filewithsender.h \
    sentfile.h \
    abstractentityfactory.h \
    ientitydao.h \
    iuserdao.h \
    iuserrelateddao.h \
    remoteserveruserdao.h \
    ireceivedfiledao.h \
    isentfiledao.h \
    iaccountdao.h \
    remoteserverentityfactory.h \
    remoteserverreceivedfiledao.h \
    remoteserversentfiledao.h \
    remoteserveraccountdao.h \
    dropsendservice.h \
    singleton.h \
    iplandao.h \
    remoteserverplandao.h \
    client.h \
    debughelper.h

FORMS    += mainwindow.ui
