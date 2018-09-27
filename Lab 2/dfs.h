
#ifndef DFS_H
#define DFS_H


#include "sortingalgorithm.h"

class DFS
{
public:

    DFS();
    DFS(int, vector<graph>);
    vector<graph> adjToSearch;
    int numOfNodes = 0;
    void DFSSearch(int start, int end);
    int getCost(){
        return cost;
    }

private:
    int cost;
};

#endif // DFS_H
