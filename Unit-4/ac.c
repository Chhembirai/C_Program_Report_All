//C program to illustrate use of pointer array
#include <stdio.h>
int main() {
    int var[] = {10, 20, 30}; // actual variable declaration.
    int *ip[3]; // pointer array declaration.
    for (int i = 0; i < 3; i++) {
        ip[i] = &var[i]; // store address of var[i] in pointer array
    }
    for (int i = 0; i < 3; i++) {
        printf("%dst variable: %d\n", i, var[i]);
        printf("Address of %d: %p\n", i, ip[i]);
        printf("Value pointed: %d\n", *ip[i]);
    }
    return 0;
}