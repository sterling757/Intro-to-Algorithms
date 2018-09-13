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

        for (int i = 0; i < nums.size(); i++) {

            auto start = std::chrono::high_resolution_clock::now();

            bs.Sort(nums[i]);

            auto end = std::chrono::high_resolution_clock::now();

            auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            int size = nums[i].size();

            pair <int,double> p (size,ms);

            statsStrings.push_back(p);

        }

    }

    else if(algoId == 1){
        InsertionSort is;

        for (int i = 0; i < nums.size(); i++) {

            auto start = std::chrono::high_resolution_clock::now();

            is.Sort(nums[i]);

            auto end = std::chrono::high_resolution_clock::now();

            auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            int size = nums[i].size();

            pair <int,double> p (size,ms);
            //string stat = std::string("Duration for Bubble Sort of Data Set of Size: " + to_string(nums[i].size()) + " = " + duration + " milliseconds");
            statsStrings.push_back(p);

        }

    }

    else if(algoId == 2){
        MergeSort merge;

        for (int i = 0; i < nums.size(); i++) {

            auto start = std::chrono::high_resolution_clock::now();

            merge.Sort(nums[i]);

            auto end = std::chrono::high_resolution_clock::now();

            auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();


            int size = nums[i].size();

            pair <int,double> p (size,ms);
            //string stat = std::string("Duration for Bubble Sort of Data Set of Size: " + to_string(nums[i].size()) + " = " + duration + " milliseconds");
            statsStrings.push_back(p);

        }
    }
    else
        cerr << "something went wrong somehow, index out of bounds!" << endl;


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

    //bubble
    for(int i = 0; i < 16; i++) {

        cout << string("Duration for Bubble Sort of Data Set of Size: " + to_string(statsStrings[i].first) + " = " + to_string(statsStrings[i].second) + " milliseconds") << endl;

    }
}

//When using Select, input 1
void SortingAlgorithm::Select(int algoId){

    if(algoId == 0){
        typeOfSort = "BUBBLE";
    }
    else if(algoId == 1){
        typeOfSort = "INSERTION";
    }
    else if(algoId == 2){
        typeOfSort = "MERGE";
    }
    else
        cerr<< "Algo id out of bounds" << endl;

}


void SortingAlgorithm::Save(string filePath){

    fstream file;
    vector<int> tempvec;
    file.open(filePath, fstream::out);

    for(int i =0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size() ; j++){

            file << nums[i][j] << std::endl;

        }
        file << std::endl;

    }

    file.close();
}

void SortingAlgorithm::Configure(){



}
