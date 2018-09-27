//
// Created by Sterling on 8/26/2018.
//



#include "sortingalgorithm.h"
#include <chrono>
#include <typeinfo>
#include <thread>
#include <tuple>

SortingAlgorithm::SortingAlgorithm(){

}


void SortingAlgorithm::Load() {

    string graphFileName = "/home/coder/Desktop/lab22/graph.txt";
    string weightsFileName = "/home/coder/Desktop/lab22/weights.txt";
    string positionsFileName = "/home/coder/Desktop/lab22/positions.txt";

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

void SortingAlgorithm::Execute() {

    //DFS Search

    if(algoId == 0){
        this->algoID = algoId;
        bfs = new BFS(vCount, adj);

        auto start = std::chrono::system_clock::now();
        bfs->BFSSearch(1, 5);

        auto end = std::chrono::system_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

        this-> time = taken;

        this-> cost = bfs->getCost();

        this->path = bfs->getPath();

        this-> numberOfNodes = path.size();

        this-> expNodes = bfs->getExpNodeCount();

        this-> distance = 0;


//                statsStrings.push_back(p);

//            }


    }
    else if(algoId == 1){

        this->algoID = algoId;
        dfs = new DFS(vCount, adj);

        auto start = std::chrono::system_clock::now();
        dfs->DFSSearch(1, 5);

        auto end = std::chrono::system_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

        this-> time = taken;


        this-> cost = dfs->getCost();
        this->path = dfs->getPath();

        this-> numberOfNodes = path.size();

        this-> expNodes = dfs->getExpNodeCount();

        this-> distance = 0;


    }
    else if(algoId == 2){

        dijk = new Dijkstra(vCount, adj);

        auto start = std::chrono::steady_clock::now();
        dijk->dijkstrasAlgo(1,5);
        auto end = std::chrono::steady_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    }


}

void SortingAlgorithm::Execute(int source, int end){

    if(algoId == 0){
        this->algoID = algoId;
        bfs = new BFS(vCount, adj);

        auto start = std::chrono::system_clock::now();
        bfs->BFSSearch(source, end);

        auto end = std::chrono::system_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

        this-> time = taken;

        this-> cost = bfs->getCost();

        this->path = bfs->getPath();

        this-> numberOfNodes = path.size();

        this-> expNodes = bfs->getExpNodeCount();

        this-> distance = 0;


//                statsStrings.push_back(p);

//            }


    }
    else if(algoId == 1){

        this->algoID = algoId;
        dfs = new DFS(vCount, adj);

        auto start = std::chrono::system_clock::now();
        dfs->DFSSearch(source, end);

        auto end = std::chrono::system_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

        this-> time = taken;


        this-> cost = dfs->getCost();
        this->path = dfs->getPath();

        this-> numberOfNodes = path.size();

        this-> expNodes = dfs->getExpNodeCount();

        this-> distance = 0;


    }
    else if(algoId == 2){

        dijk = new Dijkstra(vCount, adj);

        auto start = std::chrono::steady_clock::now();
        dijk->dijkstrasAlgo(source, end);
        auto end = std::chrono::steady_clock::now();
        auto taken = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    }
}

void SortingAlgorithm::Display(){

    cout << "PATH FOR ALGO: ";
            if(algoId == 0){
                cout << "BFS" << endl;
            }
            else if(algoId == 1){
                cout << "DFS" << endl;
            }
            else if(algoId == 2){
                cout << "DIJKSTRA" << endl;
            }
            else if(algoId == 3){
                cout << "A*" << endl;
            }
            else
                cout << "INVALID ALGO ID!" << endl;
            for(int i = 0; i < path.size(); i++){
                   cout << path[i] << " ";
            }
            cout << endl;

}

void SortingAlgorithm::Stats(){

    cout << "STATS FOR ALGO: ";
    if(algoID == 0){
        cout << "BFS" << endl;
    }
    else if(algoID == 1){
        cout << "DFS" << endl;
    }
    else if(algoID == 2){
        cout << "DIJKSTRA" << endl;
    }
    else if(algoID == 3){
        cout << "A*" << endl;
    }
    else
        cout << "INVALID ALGO ID!" << endl;

    cout << "PATH: " ;
    for(int i = 0; i < path.size(); i++){
           cout << path[i] << " ";
    }
    cout << endl;

    cout << "NUMBER OF NODES IN PATH: " << numberOfNodes << endl;
    cout << "COST FOR RETURNED PATH: " << cost << endl;
    cout << "DISTANCE TRAVELED IN PATH: " << distance << endl;
    cout << "NUMBER OF NODES EXPLORED WHICH SEARCHING FOR PATH: " << expNodes << endl;
    cout << "TOTAL TIME TO FIND THE PATH: " << time << endl << endl;

}

//When using Select, input 1
void SortingAlgorithm::Select(int selector){

    if(selector == 0){
        this->algoID = 0;
    }
    else if(selector == 1){
        this->algoID = 1;
    }
    else if(selector == 2){
        this->algoID = 2;
    }
    else if(selector == 3){
        this->algoID = 3;
    }
    else
        cerr<<"INVALID SELECTOR" << endl;


}


void SortingAlgorithm::Save(){


    ofstream out("paths.txt");
    out << "PATH FOR ALGO: ";
    for(int i = 0; i < path.size(); i++){
           out << path[i] << "->";
    }
    out << endl;

    out.close();

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

