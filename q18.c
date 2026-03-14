//18
#include<stdio.h>
int main() {
    int a, b;
    
    printf("Enter two numbers a and b : ");
    scanf("%d%d",&a, &b);
    

    if(a > b) {
        printf("a is the largest\n");
    } else if (a < b) { 
        printf("b is the largest\n");
    } else {
        printf("Both are equal");
    }
    
    return 0;
}