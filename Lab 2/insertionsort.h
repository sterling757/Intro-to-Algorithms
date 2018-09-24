#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


//
// Created by Sterling on 9/5/2018.
//

#ifndef LAB1_INSERTIONSORT_H
#define LAB1_INSERTIONSORT_H

#include "sortingalgorithm.h"

class InsertionSort : public SortingAlgorithm {

public:

    InsertionSort();
    void Sort(vector<int>&);

private:

    int tmp;

};


#endif //LAB1_INSERTIONSORT_H

#endif // INSERTIONSORT_H
