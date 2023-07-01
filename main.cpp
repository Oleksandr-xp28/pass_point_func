// pass_point_func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "lib.h"

int main() {

    int arr[] = { 1, 2, 3, 4, 5 };

    int sum, mul;
  
    sumAndProduct(arr, 5, &sum, &mul);

    cout << "The sum of the array elements is " << sum << endl;
    cout << "The product of the array elements is " << mul << endl;

    return 0;
}


// Subject: Pointers. Passing parameters
// Task for independent work 2