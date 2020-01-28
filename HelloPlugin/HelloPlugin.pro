TEMPLATE = lib
CONFIG += plugin
QT += widgets
INCLUDEPATH += ../MainWidget
TARGET  = $$qtLibraryTarget(helloplugin)
DESTDIR = ../plugins

HEADERS += \
    helloplugin.h

SOURCES += \
    helloplugin.cpp
