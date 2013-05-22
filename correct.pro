QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = correct
TEMPLATE = app


SOURCES += main.cpp\
    about.cpp \
    schooldb.cpp \
    Login.cpp \
    teacherswindow.cpp \
    schoolmasterwindow.cpp

HEADERS  += about.h \
    schooldb.h \
    Login.h \
    teacherswindow.h \
    schoolmasterwindow.h
