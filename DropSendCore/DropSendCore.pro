#-------------------------------------------------
#
# Project created by QtCreator 2010-09-06T07:48:13
#
#-------------------------------------------------

TARGET = DropSendCore
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    dropsendservice.cpp \
    debug/debughelper.cpp \
    data/filewithsender.cpp \
    data/file.cpp \
    data/entitywithid.cpp \
    data/abstractentityfactory.cpp \
    data/dao/remoteserver/remoteserveruserdao.cpp \
    data/dao/remoteserver/remoteserversentfiledao.cpp \
    data/dao/remoteserver/remoteserverreceivedfiledao.cpp \
    data/dao/remoteserver/remoteserverplandao.cpp \
    data/dao/remoteserver/remoteserverentityfactory.cpp \
    data/dao/remoteserver/remoteserveraccountdao.cpp \
    data/entities/user.cpp \
    data/entities/sentfile.cpp \
    data/entities/receivedfile.cpp \
    data/entities/plan.cpp \
    data/entities/client.cpp \
    data/entities/account.cpp

HEADERS += \
    dropsendservice.h \
    utils/singleton.h \
    debug/debughelper.h \
    data/filewithsender.h \
    data/file.h \
    data/entitywithid.h \
    data/abstractentityfactory.h \
    data/dao/iuserrelateddao.h \
    data/dao/iuserdao.h \
    data/dao/isentfiledao.h \
    data/dao/ireceivedfiledao.h \
    data/dao/iplandao.h \
    data/dao/ientitydao.h \
    data/dao/iaccountdao.h \
    data/dao/remoteserver/remoteserveruserdao.h \
    data/dao/remoteserver/remoteserversentfiledao.h \
    data/dao/remoteserver/remoteserverreceivedfiledao.h \
    data/dao/remoteserver/remoteserverplandao.h \
    data/dao/remoteserver/remoteserverentityfactory.h \
    data/dao/remoteserver/remoteserveraccountdao.h \
    data/entities/user.h \
    data/entities/sentfile.h \
    data/entities/receivedfile.h \
    data/entities/plan.h \
    data/entities/client.h \
    data/entities/account.h

OTHER_FILES += \
    DropSendCore.pro.user \
    DropSendCore.pro
