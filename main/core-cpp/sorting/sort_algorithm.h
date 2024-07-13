/*
sort_algorithm.h
sidb95
bhatoresiddharth@gmail.com
13 July 2024
*/

class Solution {
public:
    vector<int> sort_algorithm(vector<int>& nums, int n) {
        sort(nums, nums.begin(), nums.end());
        return nums;
    }
};
