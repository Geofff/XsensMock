#-------------------------------------------------
#
# Project created by QtCreator 2017-08-15T19:29:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = XsensMock
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
LIBS +=-Lproto -lboost_system -lprotobuf_messages -lprotobuf
QMAKE_RPATHDIR += $ORIGIN/../proto
