//Program to find sum of two numbers using functions
#include <stdio.h>
int sum(int, int);
int main(){
    int a, b, add;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add = sum(a, b);
    printf("Sum of %d and %d = %d\n", a, b, add);
    return 0;
}
int sum(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}