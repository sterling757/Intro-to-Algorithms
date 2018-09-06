//
// Created by Sterling on 8/26/2018.
//


#include "SortingAlgorithm.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include <chrono>
SortingAlgorithm::SortingAlgorithm() {

}

void SortingAlgorithm::Load(string filePath) {

    string line;
    ifstream myFile(filePath);
    if (myFile.is_open())
    {
        while ( getline (myFile,line) )
        {
            rowOfNums.clear();

            istringstream is(line);
            int n;
            while(is >> n) {

                rowOfNums.push_back(n);

            }
            nums.push_back(rowOfNums);

        }
        myFile.close();

    }

    else
        cout << "Unable to open file";


}

void SortingAlgorithm::Execute(int algoId) {


    if(algoId == 0){
        BubbleSort bs;

        cout << "Sorting..." << endl;
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < nums.size(); i++) {

            bs.Sort(nums[i]);
            auto end = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>( end - start ).count();
            std::cout << "Duration for Bubble Sort of Data Set of Size: " << nums[i].size() << " = " << duration << " milliseconds" << endl;

        }



    }

    else if(algoId == 1){
        InsertionSort is;

        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < nums.size(); i++) {

            is.Sort(nums[i]);
            auto end = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>( end - start ).count();
            std::cout << "Duration for Insertion Sort of Data Set of Size: " << nums[i].size() << " = " << duration << " milliseconds" << endl;

        }

    }

    else if(algoId == 2){
        MergeSort ms;

        auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < nums.size(); i++) {

            ms.Sort(nums[i]);
            auto end = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>( end - start ).count();
            std::cout << "Duration for Merge Sort of Data Set of Size: " << nums[i].size() << " = " << duration << " milliseconds" << endl;
        }

    }
    else
        cerr << "something went wrong somehow, index out of bounds!" << endl;

    Display();
    //Save();

}

void SortingAlgorithm::Display(){

    for(int i =0; i < nums.size(); i++){

        for (int j = 0; j < nums[i].size(); j++) {
            cout << nums[i][j] << " ";
        }

        cout << '\n';
    }

}


void SortingAlgorithm::Stats(){



}

//When using Select, input 1
void SortingAlgorithm::Select(int algoId){



}


void SortingAlgorithm::Save(){



}

void SortingAlgorithm::Configure(){



}