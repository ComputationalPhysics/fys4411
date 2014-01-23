TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/mainapplication.cpp \
    src/atom.cpp

HEADERS += \
    src/mainapplication.h \
    src/atom.h

LIBS += -larmadillo
