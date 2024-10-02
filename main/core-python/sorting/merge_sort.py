"""
merge_sort.py
sidb95
bhatoresiddharth@gmail.com
02 Oct 2024
"""

def mergeSortAux(nums1: List[int], nums2: List[int]) -> List[int]:
    pass

def mergeSort(nums: List[int], start: int, end: int):
    n = len(nums)
    if ((end - start) <= 1):
        return nums
    else:
        mid = int((end - start) / 2)
        nums1 = mergeSort(nums[:mid + 1], start, mid)
        nums2 = mergeSort(nuns[mid:], mid + 1, end)
        return mergeSortAux(nums1, nums2)

