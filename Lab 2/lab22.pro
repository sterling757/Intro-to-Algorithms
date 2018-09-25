TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sortingalgorithm.cpp \
    buildgraph.cpp \
    dfs.cpp

HEADERS += \
    algorithm.h \
    sortingalgorithm.h \
    buildgraph.h \
    dfs.h


DISTFILES += \
    graph.txt \
    positions.txt \
    weights.txt

