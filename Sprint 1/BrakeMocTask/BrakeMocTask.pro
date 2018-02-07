#-------------------------------------------------
#
# Project created by QtCreator 2018-02-01T11:48:54
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BrakeMocTask
TEMPLATE = app


SOURCES += main.cpp\
        homeform.cpp \
    listeordersform.cpp \
    intermediatform.cpp \
    generalform.cpp \
    fichierlog.cpp

HEADERS  += homeform.h \
    listeordersform.h \
    intermediatform.h \
    generalform.h \
    fichierlog.h

FORMS    += homeform.ui \
    listeordersform.ui \
    intermediatform.ui \
    generalform.ui
