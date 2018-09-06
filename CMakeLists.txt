cmake_minimum_required(VERSION 3.9)
project(lab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab1 main.cpp Algorithm.h SortingAlgorithm.cpp SortingAlgorithm.h BubbleSort.cpp MergeSort.cpp MergeSort.h InsertionSort.cpp InsertionSort.h BubbleSort.h)