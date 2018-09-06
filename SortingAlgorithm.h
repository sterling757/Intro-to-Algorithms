//
// Created by Sterling on 8/28/2018.
//

#ifndef ALGO_PROGRAMS_SORTINGALGORITHM_H
#define ALGO_PROGRAMS_SORTINGALGORITHM_H

#include "Algorithm.h"


using namespace std;

class SortingAlgorithm : public Algorithm{

public:

    SortingAlgorithm();
    void Load(string) override;
    void Execute(int) override;
    void Display() override; //Prints solution to screen
    void Stats() override; //Prints algorithm name, execution time and number of records analyzed to screen in readable format
    void Select(int) override; //enum or int or id passed as input and loads corresponding algorithm to interface
    void Save() override;
    void Configure() override; //Future Expandability
    vector<int> rowOfNums;

    //holds vectors of each row to be sorted. nums[0] = first row of txt file
    vector<vector<int>> nums;


};



#endif //ALGO_PROGRAMS_SORTINGALGORITHM_H
