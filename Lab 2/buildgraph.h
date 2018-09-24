#ifndef BUILDGRAPH_H
#define BUILDGRAPH_H

#include "sortingalgorithm.h"
class BuildGraph
{
    private:

        struct vertex{
            bool visited;
            int weight;
            int data;
            struct vertex* next;
        };

        struct adjList{
            struct vertex *head;
        };

        int numOfVerts;
        bool visitedNodes[100];

        vector<adjList> adjacencyList;

    public:

        BuildGraph();
        BuildGraph(int vertices);
        vertex* addVertex(int);
        void addEdge(int, int);
        void addWeight(int, int, int);
        void printAdjList();



};
#endif // BUILDGRAPH_H
