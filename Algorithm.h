//
// Created by Sterling on 8/26/2018.
//

#ifndef ALGO_PROGRAMS_ALGORITHM_H
#define ALGO_PROGRAMS_ALGORITHM_H
#include <iostream>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;
class Algorithm {

public:
    void Load(string); //Takes a filename as and can read input data file
    void Execute(); //Executes the search algorithm
    void Display(); //Prints solution to screen
    void Stats(); //Prints algorithm name, execution time and number of records analyzed to screen in readable format
    void Select(); //enum or int or id passed as input and loads corresponding algorithm to interface
    void Save(); //Saves solution to file path given as input
    void Configure(); //Future Expandability


private:

    vector<int> rowOfNums;
    vector<vector<int>> nums;

};


#endif //ALGO_PROGRAMS_ALGORITHM_H
