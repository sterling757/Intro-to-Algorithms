
#ifndef DFS_H
#define DFS_H


#include "sortingalgorithm.h"

class DFS
{
public:

    DFS();
    DFS(int, vector<BuildGraph>);
    vector<BuildGraph> adjToSearch;
    long int numOfNodes = 0;
    void DFSSearch(int , int );
    int getCost(){
        return cost;
    }

private:
    int cost = 0;
};

#endif // DFS_H
