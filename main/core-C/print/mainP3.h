/*
Main File Print 3
sidb95
bhatoresiddharth@gmail.com 
12 July 2024
*/

#include "print.h"

void mainP3(char* s) {
    size1 = lenString(s);
    int i;
    for (i = 0; i < size1; i += 1) {
        printCharacter(s[i]);
    }
    printCharacter('\n');
    return;
}
