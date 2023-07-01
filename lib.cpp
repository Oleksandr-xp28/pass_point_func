#include "lib.h"

void sumAndProduct(int* arr, int size, int* sum, int* mul) {

    *sum = 0;
    *mul = 1;

    for (int i = 0; i < size; i++) {

        *sum += arr[i];

        *mul *= arr[i];
    }
}