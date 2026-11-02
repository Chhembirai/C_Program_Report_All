//7
//Input two numbers and find sum, subtract, multiply, divide and modulous to display it
#include <stdio.h>
int main(){
    int a, b, sum, sub, mul, div, mod;
    
    printf("Enter first and second number =");
    scanf("%d%d", &a, &b);
    
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    
    printf("Sum is %d\n", sum);
    printf("Subtraction is %d\n", sub);
    printf("Multiplication is %d\n", mul);
    printf("Division is %d\n", div);
    printf("Modulus is %d\n", mod);
    
    return 0;
}