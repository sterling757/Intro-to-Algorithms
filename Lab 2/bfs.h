
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

    void setPath(vector<int> path);
    vector<int> getPath();
    vector<int> p;
    int getExpNodeCount();

private:
    int cost = 0;
    int expNodeCount = 0;
};

#endif // BFS_H
