#-------------------------------------------------
#
# Project created by QtCreator 2016-04-07T14:47:31
#
#-------------------------------------------------

QT       += core gui

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

FORMS +=

INCLUDEPATH += $$PWD
BoostPath = $$PWD/lib
BoostVersionDebug = -mgw44-mt-d-1_55
BoostVersion = -mgw44-mt-1_55

CONFIG(debug) {
    LIBS += -L$${BoostPath} -lboost_thread$${BoostVersionDebug}
}else {
    LIBS += -L$${BoostPath} -lboost_thread$${BoostVersion}
}
