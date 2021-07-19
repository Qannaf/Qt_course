QT += core
QT -= gui

CONFIG += c++11

TARGET = 31-GUI-Thread
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mythread.cpp

HEADERS += \
    mythread.h
