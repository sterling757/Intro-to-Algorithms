
#ifndef BFS_H
#define BFS_H


#include "sortingalgorithm.h"

class BFS
{
public:
    BFS();

    BFS(int, vector<class BuildGraph>);
    vector<class BuildGraph> adjToSearch;
    long int numOfNodes = 0;
    void BFSSearch(int, int);
    int getCost(){
        return cost;
    }

private:
    int cost = 0;
};

#endif // BFS_H
