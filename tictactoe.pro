QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tictactoe
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    record.cpp

HEADERS  += mainwindow.h \
    record.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
