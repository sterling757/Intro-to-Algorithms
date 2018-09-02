//
// Created by Sterling on 8/26/2018.
//

#include <sstream>
#include "Algorithm.h"



void Algorithm::Load(string filePath) {

    ifstream myfile (filePath);
    string line;
    int count =0;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            istringstream is(line);
            int n;
            while(is >> n){
                rowOfNums.push_back(n);

            }
            numsToBeSorted[count] = rowOfNums;
            rowOfNums.clear();
            count++;
        }
        myfile.close();
    }

    else
        cout << "Unable to open file";







}