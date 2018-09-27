#include "bfs.h"
#include <queue>


BFS::BFS()
{

}
BFS::BFS(int num, vector<BuildGraph> vec){
    this->numOfNodes = num;
    this->adjToSearch = vec;
}


// utility function for finding paths in graph
// from source to destination
void BFS::BFSSearch(int start, int end)
{
    vector<int> nodePath;
    nodePath.push_back(start);

    queue<vector<int> > q;
    q.push(nodePath);

    bool pathFound = false;

    bool hasVisited[numOfNodes];

    for(int i = 0; i < numOfNodes; i++){
        hasVisited[i] = false;
    }

    while (!q.empty() && pathFound == false) {

        nodePath = q.front();
        q.pop();

        int pathEnd = nodePath[nodePath.size() - 1];

        if (pathEnd == end){

            for (int i = 0; i < nodePath.size(); i++){
                cout << nodePath[i] << " ";
                this->cost += adjToSearch[nodePath[i]-1].weights[nodePath[i+1]];
            }

            pathFound = true;
        }

        for (int i = 0; i < adjToSearch[pathEnd-1].connections.size(); i++) {

            if (!hasVisited[adjToSearch[pathEnd-1].connections[i]]) {

                vector<int> newPath(nodePath);

                newPath.push_back(adjToSearch[pathEnd-1].connections[i]);
                q.push(newPath);
                hasVisited[adjToSearch[pathEnd-1].connections[i]] = true;
            }
        }
    }
}
