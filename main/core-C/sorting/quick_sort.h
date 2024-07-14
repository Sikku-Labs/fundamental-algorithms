/*
quick_sort.h
sidb95 
bhatoresiddharth@gmail.com 
14 July 2024
*/

int* quickSort(int* nums, int n, int i, int j);

int* quickSortAux(int* nums, int n, int i, int j);

int* quickSortAux(int* nums, int n, int i, int j) {
    int itr = j, ptr = j - 1;
    bool FLAG = false;
    while ((ptr >= 0) && (itr >= 0) && (itr > ptr) && (!FLAG)) {
        if (nums[ptr] > nums[itr]) {
            int TEMP= nums[ptr];
            if (itr != 0) {
                nums[ptr] = nums[itr - 1];
                nums2[itr - 1] = nums1[itr];
                nums2[itr] = TEMP;
                itr -= 1;
            }
        }
        ptr -= 1;
    }
    return nums;
}

int* quickSort(int* nums, int n, int i, int j) {
    if (i >= n) {
        return nums;
    }
    if (i < 0) {
        return nums;
    }
    int j = quickSortAux(nums, n, n - 1);
    nums = quickSort(nums, n, i, j);
    nums = quickSort(nums, n, j + 1, n - 1);
    return nums;
}
