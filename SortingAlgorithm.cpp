//
// Created by Sterling on 8/26/2018.
//


#include "SortingAlgorithm.h"
#include "BubbleSort.h"

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

                bs.Sort(nums[i]);

        }

    }
    else if(algoId == 1){

//        for (int i = 0; i < nums.size(); i++) {
//
//            bs.Sort(nums[i]);
//
//        }

    }
    else if(algoId == 2){

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
void SortingAlgorithm::Select(int algoId){



}


void SortingAlgorithm::Save(){



}

void SortingAlgorithm::Configure(){



}