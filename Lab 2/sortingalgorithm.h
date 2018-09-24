#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H


//
// Created by Sterling on 8/28/2018.
//

#ifndef ALGO_PROGRAMS_SORTINGALGORITHM_H
#define ALGO_PROGRAMS_SORTINGALGORITHM_H

#include "algorithm.h"
#include "buildgraph.h"

#include <chrono>
#include <list>


using namespace std;

class SortingAlgorithm : public Algorithm{

public:

    SortingAlgorithm(){};
    void Load(string, string) override;
    void Execute(int) override;
    void Display() override; //Prints solution to screen
    void Stats() override; //Prints algorithm name, execution time and number of records analyzed to screen in readable format
    void Select(int) override; //enum or int or id passed as input and loads corresponding algorithm to interface
    void Save(string filePath) override;
    void Configure() override; //Future Expandability


    //builder
//    enum Configuration {
//        RECURSIVE = 0,
//        ITERATIVE
//    };
//    void setExecutionType(SortingAlgorithm::Configuration exe);
//    void setStorageType(SortingAlgorithm::Configuration stg);
//
//    void getConfig();

//    SortingAlgorithm(const SortingAlgorithm & srt);
    //end Builder



private:

    void LoadGraph(string, string);

    //builder
//    Configuration executionType;
//    Configuration  storageType;
//    end Builder
//    void executeBubble(int i);
//    void executeInsertion();
//    void executeMerge();

};



#endif //ALGO_PROGRAMS_SORTINGALGORITHM_H
#endif // SORTINGALGORITHM_H
