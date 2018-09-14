//
// Created by Sterling on 9/5/2018.
//

#ifndef LAB1_MERGESORT_H
#define LAB1_MERGESORT_H


#include "SortingAlgorithm.h"

class MergeSort : public SortingAlgorithm{

public:

    MergeSort();
    void Sort(vector<int>&);
    void Merge(vector<int>&, vector<int>&, vector<int>&);

private:


};


#endif //LAB1_MERGESORT_H
