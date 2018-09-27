#ifndef BUILDGRAPH_H
#define BUILDGRAPH_H

#include "sortingalgorithm.h"

class BuildGraph {


    private:

        int numOfVerts;


    public:


        struct vertex{
            bool visited;
            int weight;
            int data;

            struct vertex* next;
        };

        struct adjList{
            struct vertex *head;
            int xPos;
            int yPos;
            int zPos;
        };


        BuildGraph();
        BuildGraph(int vertices);
        vertex* addVertex(int);
        void addEdge(int, int);
        void addWeight(int, int, int);
        void addPositions(int, int, int, int);
        void printAdjList();
        vector<adjList> adjacencyList;
        ~BuildGraph();



};
#endif // BUILDGRAPH_H
