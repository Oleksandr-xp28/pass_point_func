#include "lib.h"

int* findSubset(int* A, int sizeA, int* B, int sizeB) {

    if (sizeB > sizeA) {
        return 0;
    }

    for (int i = 0; i <= sizeA - sizeB; i++) {

        bool isSubset = true;

        for (int j = 0; j < sizeB; j++) {

            if (A[i + j] != B[j]) {
                isSubset = false;
                break;
            }
        }

        if (isSubset) {
            return &A[i];
        }
    }

    return 0;
}