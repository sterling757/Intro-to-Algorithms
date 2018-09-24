//
// Created by Sterling on 8/26/2018.
//

#include "buildgraph.h"
#include "sortingalgorithm.h"
#include "bubblesort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include <chrono>
#include <typeinfo>

void SortingAlgorithm::Load(string graphFileName, string weightsFileName, string positionsFileName) {

    LoadAdjListGraph(graphFileName, weightsFileName, positionsFileName);


}

void SortingAlgorithm::LoadAdjListGraph(string graphFileName, string weightPath, string postionsPath) {

    string line;
    int startNode = 0;
    string connectedNodes = "";

    ifstream graphFile(graphFileName);


    int vertCount = 0;
    string ex;
    while( getline(graphFile, ex, '\n')){
        vertCount++;
    }

    BuildGraph* b = new BuildGraph(vertCount+1);

    graphFile.close();
    //cout << vertCount << endl;


    ifstream graphFile2(graphFileName);

    if (graphFile2.is_open())
    {
        while (vertCount > 0)
        {

            getline(graphFile2, line, ',');
            getline(graphFile2, connectedNodes, '\n');

            startNode = stoi(line);


            //cout << "Node: " << startNode << " is connected to Node(s): " << connectedNodes << endl;

            stringstream ss(connectedNodes);

            //each sequential connected node to original vertex
            int i;
            vector<int> nums;
            while(ss >> i){
                b->addEdge(startNode, i);
                if(ss.peek() == ','){
                    ss.ignore();
                }

            }
            vertCount--;

        }

        graphFile2.close();

    }

    else
        cout << "Unable to open file";

    //just for testing
    b->printAdjList();

    //freeing up allocated memory

    //opens and reads weights
    ifstream weightFile(weightPath);

    string originalNode;
    string destinationNode;
    string weight;

    while(weightFile.is_open() && (!weightFile.eof())){

           getline(weightFile, originalNode, ',');
           getline(weightFile, destinationNode, ',');
           getline(weightFile, weight, '\n');

           int start = stoi(originalNode);
           int end = stoi(destinationNode);
           int w = stoi(weight);

           b->addWeight(start, end, w);

    }
    weightFile.close();

    //opens and reads positions(x,y,z)
    ifstream positionFile(postionsPath);

    string node;
    string xPos;
    string yPos;
    string zPos;
    while(positionFile.is_open() && (!positionFile.eof())){

        getline(positionFile, node, ',');
        getline(positionFile, xPos, ',');
        getline(positionFile, yPos, ',');
        getline(positionFile, zPos, '\n');

        int n = stoi(node);
        int x = stoi(xPos);
        int y = stoi(yPos);
        int z = stoi(zPos);

        b->addPositions(n, x, y, z);

    }
    positionFile.close();



}

void SortingAlgorithm::Execute(int algoId) {


}

void SortingAlgorithm::Display(){


}

void SortingAlgorithm::Stats(){


}

//When using Select, input 1
void SortingAlgorithm::Select(int algoId){


}


void SortingAlgorithm::Save(string filePath){

    fstream file;
    vector<int> tempvec;
    file.open(filePath, fstream::out);



    file.close();
}

void SortingAlgorithm::Configure(){



}

//builder stuff
//void SortingAlgorithm::setExecutionType(SortingAlgorithm::Configuration exe) {
//    executionType = exe;
//}
//
//void SortingAlgorithm::setStorageType(SortingAlgorithm::Configuration stg) {
//    storageType = stg;
//}
//
//void SortingAlgorithm::getConfig() {
//    if(executionType == SortingAlgorithm::Configuration::ITERATIVE){
//        cout << "Iterative execution";
//    }
//    else
//        cout << "Recursive execution";
//
//    //if(storageType == SortingAlgorithm::Configuration::)
//}
//
////calls base class passing in constructor -> passes up chain of command
//SortingAlgorithm::SortingAlgorithm(const SortingAlgorithm & srt) : Algorithm(srt) {
//    executionType = srt.executionType;
//    storageType = srt.storageType;
//    //activeAlgo = srt.activeAlgo;
//}
//
//Algorithm* SortingAlgorithm::Clone() {
//    return new Sort(*this);
//}
