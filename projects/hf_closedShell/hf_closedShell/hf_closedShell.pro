TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -llapack -larmadillo -lboost_regex

SOURCES += main.cpp

