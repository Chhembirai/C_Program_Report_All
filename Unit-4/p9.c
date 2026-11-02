//C program to demonstrate passing to pointer functions
#include <stdio.h>
int add(int *a, int *b) {
    return *a + *b;
}
int main() {
    int x = 5, y = 10;
    int res = add(&x, &y);
    printf("Sum: %d\n", res);
    return 0;
}