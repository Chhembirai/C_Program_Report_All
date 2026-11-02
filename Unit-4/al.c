//C program to demonstrate use of dangling pointer in another way
#include <stdio.h>
int* createDanglingPointer() {
    static int num = 42; // Local variable
    return &num; // Returning address of local variable (dangling pointer)
}
int main() {
    int *danglingPtr = createDanglingPointer(); // Get dangling pointer

    // Attempt to use the dangling pointer (undefined behavior)
    printf("Value from dangling pointer: %d\n", *danglingPtr); // May print garbage value or cause a crash

    return 0;
}