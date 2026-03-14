//17
//Input number and find pre-decrement and post-decrement
#include<stdio.h>
int main() {
    int n;
    
    printf("Enter a number = ");
    scanf("%d", &n);
    
    printf("After pre-decrement a is %d\n", --n);
    printf("After post-decrement a first becomes %d\n", n--);
    printf("Final value of a after post-decrement is %d\n", n);
    
    return 0;
}