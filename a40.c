//Program to illustrate swapping in function using call by reference
#include <stdio.h>
void swap(int *, int *);
int main() {
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}