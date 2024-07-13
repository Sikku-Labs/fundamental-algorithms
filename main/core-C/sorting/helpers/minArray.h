#include <stdio.h>

int minArray(int* nums, int n) {
    int minElmt = INT_MAX;
    int index;
    for (int i = 0; i < n; i += 1) {
        if (minElmt > nums[i]) {
            minElmt = nums[i];
            index = i;
        }
        nums[index] = INT_MAX;
    }
    return nums;
}
