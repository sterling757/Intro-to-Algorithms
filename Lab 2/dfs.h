#ifndef DFS_H
#define DFS_H

#include "sortingalgorithm.h"
#include "buildgraph.h"

class DFS : public SortingAlgorithm
{

    public:
        vector<BuildGraph::adjList> adjacencyList;

        DFS(){}
        DFS(vector<BuildGraph::adjList>, int);

        void DepthFirstSearch(int source, int destination);

    private:
        int vertCount;
};

#endif // DFS_H
