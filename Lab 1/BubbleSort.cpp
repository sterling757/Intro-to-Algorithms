//
// Created by Sterling on 9/5/2018.
//

#include "BubbleSort.h"

BubbleSort::BubbleSort() {}


void BubbleSort::Sort(vector<int>& numsToSort) {

    if (numsToSort.size() <= 1) {
        cout << "You have no numbers to sort" << endl;
        return;
    }

    switchNum = true;
    while(switchNum) {

        switchNum = false;

        for (int i = 0; i < numsToSort.size() -1 ; i++) {

            if (numsToSort[i] > numsToSort[i + 1]) {

                numsToSort[i] += numsToSort[i + 1]; //13

                numsToSort[i + 1] = numsToSort[i] - numsToSort[i + 1]; //10

                numsToSort[i] -= numsToSort[i + 1];

                switchNum = true;

            }
        }
    }
}
