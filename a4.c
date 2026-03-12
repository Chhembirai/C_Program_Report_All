//Program to let user input two numbers where first number is base and second number is exponent and print the result of base raised to the power of exponent
#include<stdio.h>
int main(){
    int i, b, e, r=1;
    printf("Enter base number: ");
    scanf("%d", &b);
    printf("Enter exponent : ");
    scanf("%d", &e);
    for(i=1; i<=e; i++){
        r *= b;
    }
    printf("%d raised to the power %d is = %d\n",b, e, r);
    return 0;
}