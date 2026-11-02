//C program to use three integers which is stored in a array of pointer
#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 30;
    int *ptr[3]; // Array of pointers
    ptr[0] = &a; // Point to a
    ptr[1] = &b; // Point to b
    ptr[2] = &c; // Point to c
    printf("Values using array of pointers:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *ptr[i]); // Dereference pointer to get value
    }
    printf("\n");
    return 0;
}