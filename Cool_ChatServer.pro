#-------------------------------------------------
#
# Project created by QtCreator 2017-10-24T17:06:19
#
#-------------------------------------------------

QT       += core gui
QT  += network
QT += sql

LIBS += -lws2_32
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cool_ChatServer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    serversocket.cpp \
    clientsocket.cpp \
    baseheader.cpp \
    databaseutil.cpp \

HEADERS += \
        mainwindow.h \
    serversocket.h \
    baseheader.h \
    clientsocket.h \
    databaseutil.h \

FORMS += \
        mainwindow.ui

DISTFILES += \
    ../build-Cool_ChatServer-Desktop_Qt_5_9_1_MinGW_32bit-Debug/history.txt \
    ../build-Cool_ChatServer-Desktop_Qt_5_9_1_MinGW_32bit-Debug/loginFile.txt \
    ../build-Cool_ChatServer-Desktop_Qt_5_9_1_MinGW_32bit-Debug/userFile.txt \
    ../build-Cool_ChatServer-Desktop_Qt_5_9_1_MinGW_32bit-Debug/history2.txt
