#ifndef Utility_hpp
#define Utility_hpp

#include <iostream>
#include <string>

class Utility
{
public:
    static void printArr(std::string tag, int *arr, int size);
    static int sumArr(int *arr, int size);
    static void insertionSort(int *arr, int size);
    static int findMaximumArr(int *arr, int size);
};

#endif