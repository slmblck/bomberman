#-------------------------------------------------
#
# Project created by QtCreator 2013-10-19T23:05:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bomberman
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    blocks.cpp \
    bomb.cpp \
    character.cpp \
    gamescreen.cpp \
    infoscreen.cpp \
    walls.cpp \
    world.cpp

HEADERS  += mainwindow.h \
    blocks.h \
    bomb.h \
    character.h \
    gamescreen.h \
    infoscreen.h \
    walls.h \
    world.h

FORMS    += mainwindow.ui \
    gamescreen.ui \
    infoscreen.ui
