#-------------------------------------------------
#
# Project created by QtCreator 2013-11-03T23:25:31
#
#-------------------------------------------------

QT       += core gui\
            sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZeroSyncDesktop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    zsfilesystemwatcher.cpp \
    zsdatabase.cpp \
    zsindex.cpp \
    zsfilemetadata.cpp

HEADERS  += mainwindow.h \
    zsfilesystemwatcher.h \
    zsdatabase.h \
    zsindex.h \
    zsfilemetadata.h

FORMS    += mainwindow.ui

OTHER_FILES +=

RESOURCES += \
    ZeroSyncResources.qrc