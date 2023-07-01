#include "lib.h"

int* removeNegative(int* arr, int size, int* newSize) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            count++;
        }
    }

    int* newArr = new int[count];

    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newArr[index] = arr[i];
            index++;
        }
    }

    *newSize = count;

    return newArr;
}