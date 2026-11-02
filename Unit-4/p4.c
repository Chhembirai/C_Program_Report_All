//C program to illustrate use of pointer arithmetic
#include <stdio.h>
int main() {
    int var[] = {10, 20}; // actual variable declaration.
    int *ptr = var; // pointer variable declaration and initialization.

    for (int i = 0; i < 2; i++) {
        printf("Variable %d: %d\n", i, var[i]);
        printf("Address of %d: %p\n", i, &var[i]);
        printf("Value pointed: %d\n", *ptr);
        printf("Address stored: %p\n", ptr);
        ptr++; // move pointer to the next integer
    }
    return 0;
}