#-------------------------------------------------
#
# Project created by QtCreator 2017-01-17T21:51:38
#
#-------------------------------------------------


QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GenomeAntivirus
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    logoanimation.cpp \
    aboutdialog.cpp \
    thread.cpp \
    gear.cpp \
    statusone.cpp \
    optionsdialog.cpp \
    warningdialog.cpp \
    abortwarningdialog.cpp \
    singlescanthread.cpp

HEADERS  += mainwindow.h \
    logoanimation.h \
    aboutdialog.h \
    thread.h \
    gear.h \
    statusone.h \
    optionsdialog.h \
    warningdialog.h \
    abortwarningdialog.h \
    singlescanthread.h

FORMS    += mainwindow.ui \
    aboutdialog.ui \
    optionsdialog.ui \
    warningdialog.ui \
    abortwarningdialog.ui

RESOURCES += \
    genome.qrc

win32: RC_ICONS = genome.ico

#Windows icon and admin right
win32 {
    RC_FILE = GenomeAntivirus.rc
}
