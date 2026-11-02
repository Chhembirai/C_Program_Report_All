//15
//Input age and find whether you are eligible to vote or not
#include<stdio.h>
int main() {
    int a;
    
    printf("Enter your age =");
    scanf("%d", &a);
    
    if (a >= 18 && a <= 100 ) {
        printf("You are eligible to vote.\n");
    } else if (a < 0 || a > 100) {
        printf("Invalid age.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
        
    return 0;
}