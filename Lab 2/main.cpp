#include <iostream>
#include "sortingalgorithm.h"

#include <chrono>
#include <cstring>


using namespace std;


int main(int argc, char *argv[]) {

    Algorithm *algo = new SortingAlgorithm();

    if (argc == 1) {

        for(int i = 0; i < 2; i++){

            //input files are located in algo->load().cpp
            algo->Load();
            algo->Select(i);
            algo->Execute();
            algo->Display();
            algo->Save();

        }

    }

    else if (argc == 3) {
        int start = atoi(argv[1]);
        int end = atoi(argv[2]);
        for(int i = 0; i < 2; i++){

            //input files are located in algo->load().cpp
            algo->Load();
            algo->Select(i);
            algo->Execute(start, end);
            algo->Display();

        }



        //start and dest inputs from command lines



    }
    else {
        cerr << "INVALID COMMAND LINE INPUT: \n"
                "1) ENTER NOTHING TO RUN FROM READ IN FROM LOCAL CSV FILES.\n"
                "2) ENTER 2 INTS, THE FIRST BEING THE START NODE, AND SECOND BEING THE END NODE";

    }
    return 0;
}









