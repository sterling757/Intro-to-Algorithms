TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sortingalgorithm.cpp \
    dfs.cpp \
    bfs.cpp \
    dijkstra.cpp

HEADERS += \
    algorithm.h \
    sortingalgorithm.h \
    buildgraph.h \
    dfs.h \
    bfs.h \
    dijkstra.h


DISTFILES += \
    graph.txt \
    positions.txt \
    weights.txt \
    largeGraph.txt \
    largePositions.txt \
    largeWeights.txt
