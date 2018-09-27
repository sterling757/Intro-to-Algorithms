#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include "sortingalgorithm.h"
#include <set>
struct result {
  int distance;
  vector<int> path;
};
class Dijkstra
{
public:
    Dijkstra();
    Dijkstra(int, vector<BuildGraph>);
    void dijkstrasAlgo(int, int);
    vector<BuildGraph> adjToSearch;
    long int numOfNodes = 0;
};

#endif // DIJKSTRA_H
