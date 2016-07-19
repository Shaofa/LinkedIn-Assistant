#-------------------------------------------------
#
# Project created by QtCreator 2016-06-09T22:12:52
#
#-------------------------------------------------

QT       += core gui
QT       += webkitwidgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LinkedinAssistant
TEMPLATE = app

HEADERS += \
    config/configurations.h \
    logging/easylogging++.h \
    business/account.h \
    business/search.h \
    browser.h \
    global.h

FORMS    += \
    UI/mainwindow.ui

RESOURCES += \
    UI/resource.qrc

CONFIG += c++11

SOURCES += \
    main.cpp \
    config/configurations.cpp \
    business/account.cpp \
    business/search.cpp \
    browser.cpp \
    global.cpp
