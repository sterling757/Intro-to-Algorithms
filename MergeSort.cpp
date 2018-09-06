//
// Created by Sterling on 9/5/2018.
//

#include "MergeSort.h"

MergeSort::MergeSort() {}

void MergeSort::Sort(vector<int>& numsToSort) {

    if (numsToSort.size() <= 1)
        return;

    auto middleOfVec = numsToSort.size() / 2;

    vector<int> leftVec(numsToSort.begin(), numsToSort.begin() + middleOfVec);
    vector<int> rightVec(numsToSort.begin() + middleOfVec, numsToSort.end());

    Sort(leftVec);
    Sort(rightVec);

    Merge(leftVec, rightVec, numsToSort);

}

void MergeSort::Merge(vector<int>& leftVec, vector<int>& rightVec, vector<int>& resultVec) {

    auto left = leftVec.begin();
    auto right = rightVec.begin();
    auto result = resultVec.begin();
    auto leftSide = leftVec.end();
    auto rightSide = rightVec.end();

    while (left != leftSide && right != rightSide)
    {
        if (*left > *right)
        {
            *result = *right;
            right++;
        }
        else
        {
            *result = *left;
            ++left;
        }

        result++;
    }
    std::copy(left, leftSide, result);
    std::copy(right, rightSide, result);

}
