#include "dfs.h"
#include <stack>


DFS::DFS()
{

}
DFS::DFS(int num, vector<BuildGraph> vec){
    this->numOfNodes = num;
    this->adjToSearch = vec;
}

void DFS::setPath(vector<int> path){
    this->p = path;

}

vector<int> DFS::getPath(){

    return p;
}

int DFS::getCost(){
    return cost;
}

int DFS::getExpNodeCount(){
    return expNodeCount;
}

// utility function for finding paths in graph
// from source to destination
void DFS::DFSSearch(int start, int end)
{
    vector<int> nodePath;
    nodePath.push_back(start);

    stack<vector<int> > q;
    q.push(nodePath);

    bool pathFound = false;

    bool hasVisited[numOfNodes];

    for(int i = 0; i < numOfNodes; i++){
        hasVisited[i] = false;
    }

    while (!q.empty() && pathFound == false) {

        nodePath = q.top();
        q.pop();

        int pathEnd = nodePath[nodePath.size() - 1];

        if (pathEnd == end){
            setPath(nodePath);
            for (int i = 0; i < nodePath.size(); i++){

                this->cost += adjToSearch[nodePath[i]-1].weights[nodePath[i+1]];

            }

            pathFound = true;
            break;
        }

        for (int i = 0; i < adjToSearch[pathEnd-1].connections.size(); i++) {

            if (!hasVisited[adjToSearch[pathEnd-1].connections[i]]) {

                vector<int> newPath(nodePath);

                newPath.push_back(adjToSearch[pathEnd-1].connections[i]);
                q.push(newPath);
                hasVisited[adjToSearch[pathEnd-1].connections[i]] = true;
                expNodeCount++;
            }
        }
    }
}

void DFS::DFSRecur(int start, int end){

    list<BuildGraph> path;
    vector<bool> visited(numOfNodes, false);
    return DFSRecurCall(start, end, path, visited);
}

void DFS::DFSRecurCall(int start, int end, list<BuildGraph>& path, vector<bool>& disc){
    disc[start-1] = true;
    path.push_back(adjToSearch[start-1]);

    if(start == end){
        //path
    }
    for(int i = 0; i < adjToSearch[start-1].connections.size(); i++){
        if(!disc[adjToSearch[start-1].connections[i]]){
            DFSRecurCall(adjToSearch[start-1].connections[i], end, path, disc);
        }
    }

}
