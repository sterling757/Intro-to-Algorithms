#include "bfs.h"
#include <queue>


BFS::BFS()
{

}
BFS::BFS(int num, vector<graph> vec){
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

void printPath(vector<int>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        cout << path[i] << " ";
    cout << endl;
}





//    queue<int> q;
//    q.push(start);
//    bool visited[numOfNodes];
//    for(int i = 0; i < numOfNodes; i++){
//        visited[i] = false;
//    }

//    visited[start-1] = true;

//    int done=0;
//    while(!q.empty() && done==0)
//    {
//        start = q.front();
//        q.pop();

//        for(int i=0; i < numOfNodes; i++)
//        {

//            if(!visited[i])
//            {
//                q.push(i);
//                visited[i]= true;
//                if(adjToSearch[i].name == end)
//                {
//                    done=1;
//                    break;
//                }
//            }
//        }
//    }
//    vector<int> a;
//    if(done==0)
//        return a;
//    else
//    {
//        int k=v2;
//        a.push_back(v2);
//        while(k!=v1)
//        {
//            k=t[k];
//            a.push_back(k);
//        }
//        return a;
//    }
