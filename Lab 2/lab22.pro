TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bubblesort.cpp \
    insertionsort.cpp \
    mergesort.cpp \
    sortingalgorithm.cpp \
    buildgraph.cpp

HEADERS += \
    algorithm.h \
    bubblesort.h \
    insertionsort.h \
    mergesort.h \
    sortingalgorithm.h \
    buildgraph.h


DISTFILES += \
    graph.txt \
    positions.txt \
    weights.txt

