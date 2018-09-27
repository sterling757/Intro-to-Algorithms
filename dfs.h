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
        //string path = "";
        //for path array
        int* path;
        //for array
        bool *visited;

        int vertCount;
        void DFSRecur(int start, int dest);
};

#endif // DFS_H
