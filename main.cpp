
#include "SortingAlgorithm.h"



using namespace std;


int main() {

    SortingAlgorithm Search ;

    string pathToSort = "C:\\Users\\Sterling\\Desktop\\lab1\\Data_Sets.txt";

    Search.Load(pathToSort);

    //passing i as the algo ID
    Search.Execute(0);

    //Search.Stats();



    return 0;


}


