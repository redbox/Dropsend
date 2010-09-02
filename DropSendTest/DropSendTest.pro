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
    ../DropSendClient/user.cpp \
    ../DropSendClient/sentfile.cpp \
    ../DropSendClient/remoteserveruserdao.cpp \
    ../DropSendClient/remoteserversentfiledao.cpp \
    ../DropSendClient/remoteserverreceivedfiledao.cpp \
    ../DropSendClient/remoteserverplandao.cpp \
    ../DropSendClient/remoteserverentityfactory.cpp \
    ../DropSendClient/remoteserveraccountdao.cpp \
    ../DropSendClient/receivedfile.cpp \
    ../DropSendClient/plan.cpp \
    ../DropSendClient/filewithsender.cpp \
    ../DropSendClient/file.cpp \
    ../DropSendClient/entitywithid.cpp \
    ../DropSendClient/dropsendservice.cpp \
    ../DropSendClient/client.cpp \
    ../DropSendClient/account.cpp \
    ../DropSendClient/abstractentityfactory.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../DropSendClient/user.h \
    ../DropSendClient/singleton.h \
    ../DropSendClient/sentfile.h \
    ../DropSendClient/remoteserveruserdao.h \
    ../DropSendClient/remoteserversentfiledao.h \
    ../DropSendClient/remoteserverreceivedfiledao.h \
    ../DropSendClient/remoteserverplandao.h \
    ../DropSendClient/remoteserverentityfactory.h \
    ../DropSendClient/remoteserveraccountdao.h \
    ../DropSendClient/receivedfile.h \
    ../DropSendClient/plan.h \
    ../DropSendClient/iuserrelateddao.h \
    ../DropSendClient/iuserdao.h \
    ../DropSendClient/isentfiledao.h \
    ../DropSendClient/ireceivedfiledao.h \
    ../DropSendClient/iplandao.h \
    ../DropSendClient/ientitydao.h \
    ../DropSendClient/iaccountdao.h \
    ../DropSendClient/filewithsender.h \
    ../DropSendClient/file.h \
    ../DropSendClient/entitywithid.h \
    ../DropSendClient/dropsendservice.h \
    ../DropSendClient/client.h \
    ../DropSendClient/account.h \
    ../DropSendClient/abstractentityfactory.h
