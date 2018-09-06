
#include "SortingAlgorithm.h"
#include "Algorithm.h"
#include <chrono>



using namespace std;


int main() {


    Algorithm *algo = new SortingAlgorithm();

    string pathToSort = "Data_Sets.txt";

    algo->Load(pathToSort);

    for (int i = 0; i < 3; i++) {

        algo->Execute(i);

    }

    string outPath = "results.txt";
    algo->Save(outPath);
    return 0;

}






