//16
//Input number and find the result of pre-increment and post-increment
#include<stdio.h>
int main() {
    int n;
    
    printf("Enter a number = ");
    scanf("%d", &n);

    printf("After pre-increment a is %d.\n", ++n);
    printf("After post-increment a first becomes %d.\n", n++);
    printf("Final value of a after post-increment is %d.\n", n);
    
    return 0;
}