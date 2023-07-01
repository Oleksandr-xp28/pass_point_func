// pass_point_func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "lib.h"

int main() {

    int size;

    cout << "Enter the size of the array: ";

    cin >> size;

    int* arr = new int[size];

    cout << "Enter the array elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The array elements are: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}



// Subject: Pointers. Passing parameters
// Task for independent work 2