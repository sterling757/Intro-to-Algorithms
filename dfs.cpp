#include "dfs.h"

DFS::DFS(vector<BuildGraph::adjList> adjList, int totalVerts){

    this->adjacencyList = adjList;
    this->vertCount = totalVerts;

}

void DFS::DepthFirstSearch(int source, int destination){

    vertCount += 1;

    visited = new bool[vertCount];
    int path_index = 0;
    DFSRecur(source, destination);

}


void DFS::DFSRecur(int start, int dest){

    //cout << "PATHS PRINTING..." << endl;
    //string newPath = path + "->";
    //path[path_index] = start;
    //path_index++;

    if(start == dest){

//        for(int i = 0; i < vertCount; i++)
//            cout << path[i] << " " << endl;
    }
    else{
        struct BuildGraph::vertex* current = adjacencyList[start].head;
        list<BuildGraph::adjList>::iterator i;

        for(int i = 0; i < adjacencyList.size(); i++ ){
            if((current != 0x0)){
                if(current->visited == false){
                    DFSRecur(i, dest);
                }
            }
        }
    }
    //path_index--;
    visited[start] = false;


}






//   for(int i = 0; i < vertCount+1; i++){

//       struct BuildGraph::vertex* current = adjacencyList[i].head;
//       cout << "NEWWW" << "\n\n";
//       cout << "Vertex: " << i << endl;
//       cout << "Vertex Position (" << adjacencyList[i].xPos << "," << adjacencyList[i].yPos << "," << adjacencyList[i].zPos << ")" << endl;

//       while(current != nullptr){

//           cout << "->" << current->data;
//           current= current->next;

//       }

//       cout << endl;


//   }


