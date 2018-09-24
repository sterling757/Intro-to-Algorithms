#ifndef ALGORITHM_H
#define ALGORITHM_H


//
// Created by Sterling on 8/26/2018.
//

#ifndef ALGO_PROGRAMS_ALGORITHM_H
#define ALGO_PROGRAMS_ALGORITHM_H
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;
class Algorithm {

public:
    Algorithm(){};
    virtual void Load(string, string, string) =0; //Takes a filename as and can read input data file
    virtual void Execute(int) = 0; //Executes the search algorithm
    virtual void Display() = 0; //Prints solution to screen
    virtual void Stats() = 0 ; //Prints algorithm name, execution time and number of records analyzed to screen in readable format
    virtual void Select(int) = 0; //enum or int or id passed as input and loads corresponding algorithm to interface
    virtual void Save(string) = 0; //[Saves solution to file path given as input]
    virtual void Configure() = 0; //Future Expandability

    //builder example stuff
    //prototype
//    virtual Algorithm * Clone() = 0;
//
//    Algorithm(const Algorithm & alg){};
//
//    //end builder stuff
//
//    //exerimental enum
//    enum SortingAlgorithms{
//        BUBBLE = 0,
//        INSERTION,
//        SORT
//    };
};


#endif //ALGO_PROGRAMS_ALGORITHM_H

#endif // ALGORITHM_H
