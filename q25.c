//25
//Input two numbers and swap their values using temporary variable temp
#include<stdio.h>
int main() {
    int a, b, t; //t is temp
    
    printf("Enter first number = ");
    scanf("%d", &a);
    printf("Enter second number = ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    t = a;
    a = b;
    b = t;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}