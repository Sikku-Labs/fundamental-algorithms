/*
bubble_sort.h
sidb95 
bhatoresiddharth@gmail.com 
12 July 2024
*/

int* bubble_sort(int* nums, int n) {
    for (int i = 0; i < n - 1; i += 1) {
        int FLAG = true;
        for (int j = i + 1; j < n; j += 1) {
            if (nums[j] < nums[i]) {
                swap(nums, i, j);
                FLAG = false;
                break;
            }
        }
        if (!FLAG) {
            break;
        }     
    }
    return nums;
}
