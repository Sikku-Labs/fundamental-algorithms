#include <stdio.h>

void printString(char* s) {
    int size1 = 0;
    while (s[size] != '\0') {
        size += 1;
    }
    for (int i = 0; i < size; i += 1) {
        printf("%c", s[i]);
    }
    printf('\n');
    return;
}
