
#ifndef BFS_H
#define BFS_H


#include "sortingalgorithm.h"

class BFS
{
public:
    BFS();
    BFS(int, vector<graph>);
    vector<graph> adjToSearch;
    int numOfNodes = 0;
    int isNotVisited(int , vector<int>& );
    void BFSSearch(int start, int end);
    void printPath(vector<int>&);
};

#endif // BFS_H
