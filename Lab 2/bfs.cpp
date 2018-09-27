#include "bfs.h"
#include <queue>

const int imax = std::numeric_limits<int>::max();
BFS::BFS()
{

}
BFS::BFS(int num, vector<graph> vec){
    this->numOfNodes = num;
    this->adjToSearch = vec;
}

int BFS::isNotVisited(int x, vector<int>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        if (path[i] == x)
            return 0;
    return 1;
}

// utility function for finding paths in graph
// from source to destination
void BFS::BFSSearch(int src, int dst)
{
    // create a queue which stores
    // the paths
    queue<vector<int> > q;

    // path vector to store the current path
    vector<int> path;
    path.push_back(src);
    q.push(path);
    bool pathFound = false;

    while (!q.empty() && pathFound == false) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];

        // if last vertex is the desired destination
        // then print the path
        if (last == dst){
            int size = path.size();
            for (int i = 0; i < size; i++)
                cout << path[i] << " ";
            cout << endl;
            pathFound = true;
        }

        // traverse to all the nodes connected to
        // current vertex and push new path to queue
        for (int i = 0; i < adjToSearch[last-1].connections.size(); i++) {
            if (isNotVisited(adjToSearch[last-1].connections[i], path)) {
                vector<int> newpath(path);
                newpath.push_back(adjToSearch[last-1].connections[i]);
                q.push(newpath);
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
