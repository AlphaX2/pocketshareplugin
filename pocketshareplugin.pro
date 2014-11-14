#-------------------------------------------------
#
# Project created by QtCreator 2014-11-13T01:27:07
#
#-------------------------------------------------

QT       -= gui
CONFIG += plugin
CONFIG += link_pkgconfig
PKGCONFIG += nemotransferengine-qt5

#shareui.files = *.qml
#shareui.path = /usr/share/nemo-transferengine/plugins

#target.path = /usr/lib/nemo-transferengine/plugins
#INSTALLS += target pocketshareplugin

TARGET = pocketshareplugin
TEMPLATE = lib

DEFINES += POCKETSHAREPLUGIN_LIBRARY

SOURCES += pocketshareplugin.cpp \
    pockettransferinterface.cpp \
    pocketplugininfo.cpp

HEADERS += pocketshareplugin.h \
    pockettransferinterface.h \
    pocketplugininfo.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    PocketSharePlugin.qml
