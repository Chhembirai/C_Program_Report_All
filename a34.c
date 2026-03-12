//Program to illustrate function with multiple of two numbers with no argument and no return value
#include <stdio.h>
void mltpl();
int main(){
    mltpl();
    return 0;
}
void mltpl(){
    int a, b, mltpl;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mltpl = a * b;
    printf("Multiplication: %d\n", mltpl);
}