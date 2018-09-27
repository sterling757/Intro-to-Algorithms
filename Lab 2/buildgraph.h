#ifndef BUILDGRAPH_H
#define BUILDGRAPH_H

#include "sortingalgorithm.h"
#include <map>

struct graph{

    int name;
    vector<int> connections;
    map<int,int> weights;
    int xPos;
    int yPos;
    int zPos;

};



#endif // BUILDGRAPH_H
