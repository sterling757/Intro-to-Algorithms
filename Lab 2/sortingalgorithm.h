#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H


//
// Created by Sterling on 8/28/2018.
//

//#ifndef ALGO_PROGRAMS_SORTINGALGORITHM_H
//#define ALGO_PROGRAMS_SORTINGALGORITHM_H

#include "algorithm.h"
#include "buildgraph.h"
#include <chrono>
#include <list>

#include "bfs.h"
#include "dfs.h"
#include "dijkstra.h"
using namespace std;

class SortingAlgorithm : public Algorithm{

public:

    SortingAlgorithm();
    ~SortingAlgorithm();

    void Load() override;
    void Execute() override;
    void Execute(int, int) override; //overridden for cmd input
    void Display() override; //Prints solution to screen
    void Stats() override; //Prints algorithm name, execution time and number of records analyzed to screen in readable format
    void Select(int) override; //enum or int or id passed as input and loads corresponding algorithm to interface
    void Save() override;
    void Configure() override; //Future Expandability

protected:

    long int vCount;
    vector<int> w;
    BuildGraph* g;
    vector<BuildGraph> adj;


private:
    class BFS* bfs;
    class DFS* dfs;
    class Dijkstra* dijk;
    void LoadAdjListGraph(string, string, string);
    int algoID = 0;
    vector<int> path = {};
    int numberOfNodes = 0;
    int cost = 0;
    int distance = 0;
    int expNodes = 0;
    double time = 0.0;
    int algoId = 0;


};



//#endif //ALGO_PROGRAMS_SORTINGALGORITHM_H
#endif // SORTINGALGORITHM_H
