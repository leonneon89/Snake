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

INCLUDEPATH += c:/boost_1_55_0/
BoostPath = c:/boost_1_55_0/stage/lib
BoostVersionDebug = -mgw44-mt-d-1_55
BoostVersion = -mgw44-mt-1_55

CONFIG(debug) {
    LIBS += -L$${BoostPath} -lboost_system$${BoostVersionDebug} \
                            -lboost_chrono$${BoostVersionDebug} \
                            -lboost_thread$${BoostVersionDebug} \
                            -lboost_timer$${BoostVersionDebug} \
                            -lboost_date_time$${BoostVersionDebug} \
                            -lboost_program_options$${BoostVersionDebug}
}else {
    LIBS += -L$${BoostPath} -lboost_system$${BoostVersion} \
                            -lboost_chrono$${BoostVersion} \
                            -lboost_thread$${BoostVersion} \
                            -lboost_timer$${BoostVersion} \
                            -lboost_date_time$${BoostVersion} \
                            -lboost_program_options$${BoostVersion}
}
