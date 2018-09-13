//
// Created by Sterling on 9/5/2018.
//

#include "InsertionSort.h"

InsertionSort::InsertionSort() {}

void InsertionSort::Sort(vector<int>& numsToSort) {

    if (numsToSort.size() <= 1) {
        cout << "You have no numbers to sort" << endl;
        return;
    }

    for (int i = 1; i < numsToSort.size(); i++) {

        for (int j = i;  numsToSort[j - 1] > numsToSort[j] && j > 0; j--) {

            tmp = numsToSort[j];
            numsToSort[j] = numsToSort[j - 1];
            numsToSort[j - 1] = tmp;

        }
    }
}

