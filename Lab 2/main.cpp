#include <iostream>
#include "sortingalgorithm.h"

#include <chrono>
#include <cstring>


using namespace std;


int main(int argc, char *argv[]) {

    Algorithm *algo = new SortingAlgorithm();
    string graphFileName = "/home/coder/Desktop/lab22/graph.txt";
    string weightFileName = "/home/coder/Desktop/lab22/weights.txt";
    if (argc == 1) {
        algo->Load(graphFileName, weightFileName);

    }

    else if (argc == 2) {

        //start and dest inputs from command lines
        int start = atoi(argv[1]);
        int end = atoi(argv[2]);

    }
    else {

        cerr << "INVALID COMMAND LINE INPUT: \n"
                "1) ENTER NOTHING TO RUN FROM READ IN FROM LOCAL CSV FILES.\n"
                "2) ENTER 2 INTS, THE FIRST BEING THE START NODE, AND SECOND BEING THE END NODE";

    }
    return 0;
}

    /*

    string outPath = "results.txt";
    algo->Save(outPath);

    builder

    SortingAlgorithm * factoryAlgo = (SortingAlgorithm *)(algoFactory::Create(algoFactory::SEARCH));

    factoryAlgo->setExecutionType(SortingAlgorithm::Configuration::ITERATIVE);
    factoryAlgo->setStorageType(SortingAlgorithm::Configuration::MATRIX);
    factoryAlgo->Select(SortingAlgorithm::SortingAlgorithms::BUBBLE);
    factoryAlgo->getConfig();

    Sort *protoAlgo = (Sort *)(factoryAlgo->Clone());
    protoAlgo->getConfiguration();


    SortingAlgorithm * factoryAlgo = (SortingAlgorithm*)(AlgoFactory::Create(AlgoFactory::type));
    factoryAlgo.setExecutionType(SortingAlgorithm::Configuration::ITERATIVE);

    SortingAlgorithm * factoryAlgo = (SortingAlgorithm *)(AlgoFactory::Create(AlgoFactory::S))


    return 0;
*/








