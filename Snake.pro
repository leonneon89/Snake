#-------------------------------------------------
#
# Project created by QtCreator 2016-04-07T14:47:31
#
#-------------------------------------------------

QT       += core

QT       += gui

TARGET = Snake
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    point.cpp \
    horizontalline.cpp \
    verticalline.cpp \
    figure.cpp \
    snake.cpp

HEADERS += \
    point.h \
    horizontalline.h \
    verticalline.h \
    figure.h \
    snake.h \
    direction.h
