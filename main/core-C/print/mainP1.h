/*
Main File Print 1
sidb95
bhatoresiddharth@gmail.com 
12 July 2024
*/

#include "print.h"

void mainP1Aux(char* s, int size1, int i) {
    if (i == size1) {
        return;
    }
    else {
        printCharacter(s[i]);
    }
    printCharacter('\n');
    mainP1Aux(s, size1, i + 1);
    return;
}

void mainP1(char* s) {
    int size1 = lenString(s);
    mainP1Aux(s, size1, 0);
    return;
}
