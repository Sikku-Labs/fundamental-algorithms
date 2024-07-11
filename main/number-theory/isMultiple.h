/*
isMultiple.h
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
*/

class Solution {
public:
    bool isMultiple(int a, int b) {
        bool propn1 = false;
        if ((a % b) == 0) {
            propn1 = true;
        }
        return propn1;
    }
};
