//20
//Input number and show left and right shift in multiplication
#include<stdio.h>
int main() {
    int n;
    
    printf("Enter a number = ");
    scanf("%d",&n);

    printf("Left Shift by 2: %d\n", n << 2);
    printf("Right Shift by 2: %d\n", n >> 2);
    
    return 0;
}