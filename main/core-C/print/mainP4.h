/*
Main File 4
sidb95 
bhatoresiddharth@gmail.com 
12 July 2024
*/

#include "print.h"

void printString(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        printCharacter(s[i]);
        i += 1;
    }
    printCharacter('\n');
    return;
}
