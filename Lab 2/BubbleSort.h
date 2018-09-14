//
// Created by Sterling on 9/6/2018.
//


#ifndef LAB1_BUBBLESORT_H
#define LAB1_BUBBLESORT_H

//I'm
#include "SortingAlgorithm.h"

class BubbleSort : public SortingAlgorithm{

public:

    BubbleSort();
    void Sort(vector<int>&);

private:
    bool switchNum;

};

#endif //LAB1_BUBBLESORT_H
