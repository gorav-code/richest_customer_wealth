#include "Utility.hpp"
#include <iostream>
#include <string>  
#include <stdlib.h>
#include <algorithm>

using namespace std;


void Utility::printArr(string tag, int *arr, int size)
{
    cout << "\n"
         << tag << " [";

    for (int i = 0; i < size; i++)
    {
        string space = ", ";
        cout << arr[i] << (i == (size - 1) ? "" :  space);
    }

    cout << "]";
}

int Utility::sumArr(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
 
    // return arg1 - arg2; // erroneous shortcut: undefined behavior in case of
                           // integer overflow, such as with INT_MIN here
}

void Utility::insertionSort(int *arr, int size)
{ 
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";

        // compare with next index value
        // if (arr[i] > arr[i + 1])
        // {
        //     int tmp = arr[i];
        //     arr[i] = arr[i + 1];
        //     arr[i + 1] = tmp;
        // }

        qsort(arr, size, sizeof(int), compare_ints);
    } 
}

int Utility::findMaximumArr(int *arr, int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    max = arr[0];
    return max;
}

