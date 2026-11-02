//Program to illustrate division of two numbers using functions with no argument and with return value
#include <stdio.h>
int div();
int main(){
    int result = div();
    printf("Division: %d\n", result);
    return 0;
}
int div(){
    int a, b, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    d=a / b;
    return d;
}