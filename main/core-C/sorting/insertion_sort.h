/*
insertion_sort.h
sidb95
bhatoresiddharth@gmail.com
13 July 2024
*/

#include <stdlib.h>
#include "helpers/minArray.h"


int* insertion_sort(int* nums, int n);

int* insertion_sort(int* nums, int n) {
    int* arr;
    arr = (int*) malloc (sizeof(int) * (n + 1));
    for (int i = 0; i < n; i += 1) {
        arr[i] = minArray(nums, n);
    }
    return arr;
}
