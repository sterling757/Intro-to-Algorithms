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

void BuildGraph::addWeight(int start, int dest, int weight){


        //go though node to find the connection to add weight
        struct vertex* current = adjacencyList[start].head;

        while(current != nullptr){
            if(current->data == dest){
                current->weight = weight;
                current= current->next;
            }

            else
                current= current->next;
        }

}

void BuildGraph::addPositions(int node, int x, int y, int z){

        adjacencyList[node].xPos = x;
        adjacencyList[node].yPos = y;
        adjacencyList[node].zPos = z;


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
