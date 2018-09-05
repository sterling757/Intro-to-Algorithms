//
// Created by Sterling on 8/26/2018.
//

#include <sstream>
#include "Algorithm.h"



void Algorithm::Load(string filePath) {

    string line;
    ifstream myFile (filePath);
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