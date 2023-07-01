#include "lib.h"

void countElements(int* arr, int size, int* negative, int* positive, int* zero) {

    *negative = 0;
    *positive = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {

        if (arr[i] < 0) {
            (*negative)++;
        }
        else if (arr[i] > 0) {
            (*positive)++;
        }
        else {
            (*zero)++;
        }
    }
}
