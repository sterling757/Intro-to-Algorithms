
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
    int getCost();
    void setPath(vector<int> path);
    vector<int> getPath();
    vector<int> p;
    int getExpNodeCount();
    void DFSRecur(int, int);
    void DFSRecurCall(int start, int end, list<BuildGraph>& path, vector<bool>& disc);
private:
    int cost = 0;
    int expNodeCount = 0;
};

#endif // DFS_H
