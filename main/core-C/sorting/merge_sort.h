/*
merge_sort.h
sidb95
bhatoresiddharth@gmail.com 
14 July 2024
*/

int* mergeSort(int* nums, int n, int i, int j);

int* mergeSortAux(int* nums, int n, int i, int j);

int* mergeSortAux(int* nums1, int* nums2, int i, int j) {
    int p = i + (j - i) / 2;
    int q = p + 1;
    int* retArr = nums1;
    int itr = i;
    int ptr = q;
    while ((itr <= p) && (ptr <= j)) {
        if (nums1[itr] > nums2[ptr]) {
            int TEMP = nums1[itr];
            nums1[itr] = nums2[ptr];
            nums2[ptr] = TEMP;
            ptr += 1;
        }
        itr += 1;
    }
    if (itr == p) {
        while (ptr <= j) {
            int TEMP = nums1[itr]
            nums1[itr] = nums2[ptr];
            nums2[
            itr += 1;
            ptr += 1;
        }
    }
    return retArr;
}

int* mergeSort(int* nums, int n, int i, int j) {
    if (i > j) {
        return nums;
    }
    else {
        return mergeSortAux(mergeSort(nums, n, i, i + (j - i) / 2), mergeSort(nums, n, i + (j - i) / 2 + 1, j), i, j);
    }
}
