#-------------------------------------------------
#
# Project created by QtCreator 2013-10-19T23:05:28
#
#-------------------------------------------------

QT       += core gui multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bomberman
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    block.cpp \
    bomb.cpp \
    character.cpp \
    gamescreen.cpp \
    infoscreen.cpp \
    world.cpp \
    wall.cpp \
    dwall.cpp \
    sounds.cpp

HEADERS  += mainwindow.h \
    block.h \
    bomb.h \
    character.h \
    gamescreen.h \
    infoscreen.h \
    world.h \
    wall.h \
    dwall.h \
    sounds.h

FORMS    += mainwindow.ui \
    gamescreen.ui \
    infoscreen.ui

RESOURCES += \
    images.qrc
