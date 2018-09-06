////
//// Created by Sterling on 9/6/2018.
////
//
//#include <iostream>
//#include "generateNumbers.h"
//
//generateNumbers::generateNumbers() {}
//
//void generateNumbers::random() {
//
//    std::vector<int> myVector;
//    srand((unsigned)time(nullptr));
//    int a = rand() % 10 + 1; //1 to 20
//
//    for (int i =0; i < a; i++){
//        int b = rand() % 10 + 1;
//        myVector.push_back(b);
//        std::cout << myVector[b] << std::endl;
//    }
//
//    std::ofstream output_file("Data_Sets.txt");
//    std::ostream_iterator<std::string> output_iterator(output_file, "\n");
//    std::copy(myVector.begin(), myVector.end(), output_iterator);
//}
//
//void generateNumbers::reversedSorted() {
//
//
//}
//
//void generateNumbers::twentyPercentUnique(){
//
//
//}
//
//void generateNumbers::thirtyPercent(){
//
//
//}