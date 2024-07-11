/*
gcd.cpp
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
*/

#include <iostream>

class Solution {
public:
    FLAG = false;
    
    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    int gcd(int a, int b) {
        if (a == 1) {
            return b;
        }
        else {
            int TEMP = a;
            a = b;
            b = a % b;
        }
        return gcd(a, b);
    }
};
