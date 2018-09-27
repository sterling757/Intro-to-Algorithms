
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
    void BFSSearch(int start, int end);
    int getCost(){
        return cost;
    }

private:
    int cost;
};

#endif // BFS_H
