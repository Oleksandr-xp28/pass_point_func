// pass_point_func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "lib.h"


int main() {

    int A[] = { 1, 2, 3, 4, 5, 6 };
    int B[] = { 3, 4, 5 };

    int* result = findSubset(A, 6, B, 3);

    if (result == 0) {
        cout << "Array B is not a subset of array A" << endl;
    }
    else {
        cout << "Array B is a subset of array A starting from index " << result - A << endl;
    }

    return 0;
}


// Subject: Pointers. Passing parameters
// Task for independent work 2