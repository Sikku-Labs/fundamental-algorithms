/*
isMultiple2.h
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
*/

class Solution {
public:
    bool isMultiple2(int a, int b) {
        int sum = 0;
        bool propn1 = false;
        if (a < b) {
            int TEMP = a;
            a = b;
            b = TEMP;
        }
        while (sum < a) {
            sum += b;
        }
        if (sum == a) {
            propn1 = true;
        }
        return propn1;
    }
};
