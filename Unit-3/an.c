//Program to illustrate sum using function with argument and return type
#include <stdio.h>
int sum(int, int);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int result = sum(x, y);
    printf("Sum = %d\n", result);
    return 0;
}
int sum(int a, int b) {
    return a + b;
}