#-------------------------------------------------
#
# Project created by QtCreator 2016-04-23T13:20:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Widgets
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui
LIBS += -L"C:\Program Files (x86)\Windows Kits\8.1\Lib\winv6.3\um\x86" -lGdi32 -lUser32
