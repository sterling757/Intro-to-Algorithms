//
// Created by Sterling on 8/28/2018.
//

#ifndef ALGO_PROGRAMS_SORTINGALGORITHM_H
#define ALGO_PROGRAMS_SORTINGALGORITHM_H

#include  <iostream>
#include <vector>

#include "Algorithm.h"

using namespace std;


class SortingAlgorithm : public Algorithm{

private:
    static void BubbleSort(vector<int>);
    static void InsertionSort(vector<int>);
    static void MergeSort(vector<int>);

};


void SortingAlgorithm::BubbleSort(vector<int> vec) {
    for(int i: vec){
        cout << i;
    }
}
#endif //ALGO_PROGRAMS_SORTINGALGORITHM_H
