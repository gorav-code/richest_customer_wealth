#include <iostream>
#include <string>
#include "Utility.hpp"


using namespace std;

const int MAX = 3;

void method_1(){
    int customers[MAX][MAX] = {{7, 1, 3}, {2, 8, 7}, {1, 9, 5}};
    int wealth[MAX];

    for (int i = 0; i < MAX; i++)
    {
        int sum = Utility::sumArr(customers[i], MAX);
        wealth[i] = sum;
    }

    Utility::insertionSort(wealth, MAX);
    Utility::printArr("Sorted Arr", wealth, MAX);

    int maxWealth = Utility::findMaximumArr(wealth, MAX);
    cout << "\nMaximum Wealth: " << maxWealth;

    //disadvantage:
    //this method usages 4 loops for iteration, sum, sort and find maximum number
    //and we also have to create separate array to store values.
}

void method_2(){
    int customers[MAX][MAX] = {{7, 1, 3}, {2, 8, 7}, {1, 9, 5}};
    int maxWealth = 0;
    for(int i = 0; i < MAX; i++){
        int currentCustomerWealth = 0;
        for (int j = 0; j < MAX; j++)
        {
            currentCustomerWealth += customers[i][j];
        }
        
        maxWealth = max(maxWealth, currentCustomerWealth);
    }

    cout << "\nMaximum Wealth is: " << maxWealth;

    //time complexity : O(n x m)
    //space complexity: O(1)
    //Advantage: it is not using any additional data structure to use maximum value of each customer
    //and also we are using only 2 loops.
}



void main()
{
    //method_1();
    method_2();    
}
 