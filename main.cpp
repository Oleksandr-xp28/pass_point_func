// pass_point_func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "lib.h"


int main() {

    int arr[] = { -1, 2, 0, -3, 4, 0 };

    int negative, positive, zero;

    countElements(arr, 6, &negative, &positive, &zero);

    cout << "The number of negative elements is " << negative << endl;
    cout << "The number of positive elements is " << positive << endl;
    cout << "The number of zero elements is " << zero << endl;

 //   delete[] arr;

    return 0;
}


// Subject: Pointers. Passing parameters
// Task for independent work 2