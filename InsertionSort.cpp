//
// Created by Sterling on 9/5/2018.
//

#include "InsertionSort.h"

InsertionSort::InsertionSort() {}

void InsertionSort::Sort(vector<int>& numsToSort) {

    for (int i = 1; i < numsToSort.size(); i++) {
        for (int j = i; j > 0 && numsToSort[j - 1] > numsToSort[j]; j--) {
            int tmp = numsToSort[j];
            numsToSort[j] = numsToSort[j - 1];
            numsToSort[j - 1] = tmp;
        }
    }
}

