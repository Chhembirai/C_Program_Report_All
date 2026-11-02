//C program to illustrate use of double pointers
#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a; // pointer to an integer
    int **pp = &p; // pointer to a pointer to an integer

    printf("Value: %d\n", a);
    printf("Value using single pointer: %d\n", *p);
    printf("Value using double pointer: %d\n", **pp);

    return 0;
}