#include "dfs.h"

DFS::DFS(vector<BuildGraph::adjList> adjList, int totalVerts){

    this->adjacencyList = adjList;
    this->vertCount = totalVerts;

}

void DFS::DepthFirstSearch(int source, int destination){




   cout << "VERT COUNT: "  << vertCount << endl;

   for(int i = 0; i < vertCount+1; i++){

       struct BuildGraph::vertex* current = adjacencyList[i].head;
       cout << "NEWWW" << "\n\n";
       cout << "Vertex: " << i << endl;
       cout << "Vertex Position (" << adjacencyList[i].xPos << "," << adjacencyList[i].yPos << "," << adjacencyList[i].zPos << ")" << endl;

       while(current != nullptr){

           cout << "->" << current->data;
           current= current->next;

       }

       cout << endl;


   }

}
