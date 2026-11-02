//C program to add two numbers using pointer variables
#include <stdio.h>
int main() {
    int a, b, sum;
    int *p1, *p2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Assign addresses to pointer variables
    p1 = &a;
    p2 = &b;

    // Calculate the sum using pointer variables
    sum = *p1 + *p2;

    // Output the result
    printf("Sum: %d\n", sum);

    return 0;
}