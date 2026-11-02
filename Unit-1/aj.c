//10
//Input length and breadth to find area of rectangle
#include<stdio.h>
int main(){
    int l, b;
    float a;
    
    printf("Enter length and breadth of rectangle = ");
    scanf("%d%d", &l, &b);
    
    a = l * b;
    printf("Area of rectangle = %.2f\n", a);
    
    return 0;
}