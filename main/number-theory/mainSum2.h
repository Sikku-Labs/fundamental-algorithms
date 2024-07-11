/*
Main File Sum 2
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
*/

class Solution {
public:
    int addTwoNumsAux(int a, int b) {
        if (b == 0) {
            return a;
        }
        else {
            return (a + 1, b - 1);
        }
    }
    int addTwoNums(int a, int b) {
        return addTwoNumsAux(a, b);
    }
};
