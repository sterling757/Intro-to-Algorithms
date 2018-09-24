#include "buildgraph.h"

BuildGraph::BuildGraph()
{

}

BuildGraph::BuildGraph(int vertices){

    this->numOfVerts = vertices;
    for(int i = 0; i < numOfVerts; i++){

        //allocate space
        adjacencyList.push_back(adjList());

        visitedNodes[i] = false;

    }

}



void BuildGraph::addEdge(int index, int destNode){
    struct vertex* current = adjacencyList[index].head;

    while (current) {

        if(current->data == destNode)
            return;

        current = current->next;

    }

    struct vertex* newVertex = addVertex(destNode);
    newVertex->next = adjacencyList[index].head;
    adjacencyList[index].head = newVertex;

    newVertex = addVertex(index);
    newVertex->next = adjacencyList[destNode].head;
    adjacencyList[destNode].head = newVertex;
}

BuildGraph::vertex* BuildGraph::addVertex(int node){

    struct vertex* newNode = new vertex;

    newNode->next = nullptr;
    newNode->visited = false;
    newNode->data = node;

    return newNode;

}

void BuildGraph::printAdjList(){
    for(int i = 0; i < numOfVerts; i++){
        struct vertex* current = adjacencyList[i].head;
        cout << "Vertex: " << i << endl;
        while(current != nullptr){
            cout << "->" << current->data;
            current= current->next;
        }
        cout << endl;

    }
}
