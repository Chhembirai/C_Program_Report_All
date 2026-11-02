//Program to illustrate sum function with argument but no return type
#include <stdio.h>
void sum(int, int);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum(x, y);
    return 0;
}
void sum(int a, int b) {
    int result = a + b;
    printf("Sum is %d\n", result);
}