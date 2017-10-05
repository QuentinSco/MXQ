QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MXQ
TEMPLATE = app

HEADERS += \
    MainWindow.h \
    CentralWidget.h \
    DateSelectionWidget.h \
    DataWidget.h

SOURCES += main.cpp \
    MainWindow.cpp \
    CentralWidget.cpp \
    DateSelectionWidget.cpp \
    DataWidget.cpp

RESOURCES += \
    resources.qrc
