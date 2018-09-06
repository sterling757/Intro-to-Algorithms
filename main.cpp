
#include "SortingAlgorithm.h"
#include "Algorithm.h"



using namespace std;


int main() {

    Algorithm* algo = new SortingAlgorithm();

    string pathToSort = "Data_Sets.txt";

    algo->Load(pathToSort);
    for(int i = 0; i < 3; i++) {

            //passing i as the algo ID
            algo->Execute(i);

            //Search.Stats();

    }
    return 0;


}


