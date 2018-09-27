//
// Created by Sterling on 8/26/2018.
//



#include "sortingalgorithm.h"
#include <chrono>
#include <typeinfo>
#include <thread>

SortingAlgorithm::SortingAlgorithm(){

}

//vector<BuildGraph::adjList> graph;
void SortingAlgorithm::Load(string graphFileName, string weightsFileName, string positionsFileName) {

    LoadAdjListGraph(graphFileName, weightsFileName, positionsFileName);


}

void SortingAlgorithm::LoadAdjListGraph(string graphFileName, string weightPath, string postionsPath) {

    string line;
        int startNode = 0;
        string connectedNodes = "";

        ifstream graphFile(graphFileName);
        ifstream weightFile(weightPath);
        ifstream positionFile(postionsPath);
        int vertCount = 0;
        string ex = "";
        while(getline(graphFile, ex, '\n')){
            vertCount++;
            adj.push_back(BuildGraph());
        }

        this->vCount = vertCount;
        //adjGraph = new BuildGraph(vertCount+1);

        graphFile.close();

        ifstream graphFile2(graphFileName);


        if (graphFile2.is_open())
        {
            while (vertCount > 0)
            {

                getline(graphFile2, line, ',');
                getline(graphFile2, connectedNodes, '\n');

                startNode = stol(line);

                stringstream ss(connectedNodes);

                //each sequential connected node to original vertex
                int i;
                vector<int> nums;
                adj[startNode-1].name = startNode;
                //BuildGraph build;
                while(ss >> i){
                    adj[startNode-1].connections.push_back(i);
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

        string t = "";
        int weightLineCount = 0;
        while(getline(weightFile, t, '\n')){
            weightLineCount++;
        }
        weightFile.close();

        ifstream weightFile2(weightPath);
        string originalNode;
        string destinationNode;
        string weight;
        vertCount = vCount;
        if(weightFile2.is_open()){
            while(weightLineCount > 0){
               getline(weightFile2, originalNode, ',');
               getline(weightFile2, destinationNode, ',');
               getline(weightFile2, weight, '\n');

               int start = stol(originalNode);
               int end = stol(destinationNode);
               int w = stol(weight);


               adj[start-1].weights.insert(pair<int,int>(end,w));
               weightLineCount--;
            }
            weightFile2.close();

        }


    //    //opens and reads positions(x,y,z)

        string x = "";
        int positionLineCount = 0;
        while(getline(positionFile, x, '\n')){
            positionLineCount++;
        }
        positionFile.close();


        string node;
        string xPos;
        string yPos;
        string zPos;

        ifstream positionFile2(postionsPath);
        if (positionFile2.is_open())
        {
            while (positionLineCount > 0){


            getline(positionFile2, node, ',');
            getline(positionFile2, xPos, ',');
            getline(positionFile2, yPos, ',');
            getline(positionFile2, zPos, '\n');

            int n = stol(node);
            int x = stol(xPos);
            int y = stol(yPos);
            int z = stol(zPos);


            //adjGraph->addPositions(n, x, y, z);
            adj[n-1].xPos = x;
            adj[n-1].yPos = y;
            adj[n-1].zPos = z;

            positionLineCount--;

            }
            positionFile2.close();
        }



}
    //just for testing
    //adjGraph->printAdjList();
    //graph = adjGraph->adjacencyList;

void SortingAlgorithm::Execute(int algoId) {

    //DFS Search

    if(algoId == 0){
              bfs = new BFS(vCount, adj);

              auto start = std::chrono::steady_clock::now();

              bfs->BFSSearch(1,6);
              auto end = std::chrono::steady_clock::now();
              auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
              //cout << taken << " milliseconds";
              long int c = bfs->getCost();
              cout << "COST: " << c << endl;


//                statsStrings.push_back(p);

//            }


    }
    else if(algoId == 1){
        dfs = new DFS(vCount, adj);

        auto start = std::chrono::steady_clock::now();
        dfs->DFSSearch(6,1);
        auto end = std::chrono::steady_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
        //cout << taken << " milliseconds";
        long int c = dfs->getCost();
        cout << "COST: " << c << endl;
    }
    else if(algoId == 2){

        dijk = new Dijkstra(vCount, adj);

        auto start = std::chrono::steady_clock::now();
        dijk->dijkstrasAlgo(1,5);
        auto end = std::chrono::steady_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
        //cout << taken << " milliseconds";
//        long int c = dfs->getCost();
//        cout << "COST: " << c << endl;
    }


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

SortingAlgorithm::~SortingAlgorithm(){
    delete[] g;
    delete[] bfs;
    delete[] dfs;
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

