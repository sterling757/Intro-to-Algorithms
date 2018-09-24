#ifndef BUBBLESORT_H
#define BUBBLESORT_H


//
// Created by Sterling on 9/6/2018.
//


#ifndef LAB1_BUBBLESORT_H
#define LAB1_BUBBLESORT_H

//I'm
#include "sortingalgorithm.h"

class BubbleSort : public SortingAlgorithm{

public:

    BubbleSort();
    void Sort(vector<int>&);

private:
    bool switchNum;

};

#endif //LAB1_BUBBLESORT_H

#endif // BUBBLESORT_H
