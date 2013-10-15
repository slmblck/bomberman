#-------------------------------------------------
#
# Project created by QtCreator 2013-10-02T17:24:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bomberman
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    blocks.cpp \
    character.cpp \
    bomb.cpp

HEADERS  += mainwindow.h \
    blocks.h \
    character.h \
    bomb.h \
    allIncludes.h

FORMS    += mainwindow.ui
