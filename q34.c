//34
//Input number and check whether it is multiples of 5 or not, divisible by 7 but not by 11
#include <stdio.h>
int main() {
    int n;
    
    printf("Enter any number = ");
    scanf("%d", &n);
    
    if (n % 5 == 0) 
        printf("%d is a multiple of 5.\n", n);
     else 
        printf("%d is not a multiple of 5.\n", n);
    
    if  (n % 7 == 0 && n % 11 == 0) {
        printf("%d is divisible both by 7 and 11.\n", n);
    } else if (n % 7 == 0 && n % 11 != 0) {
        printf("%d is divisible by 7 but not divisible by 11.\n", n);
    } else if (n % 7 != 0 && n % 11 == 0) {
        printf("%d is not divisible by 7 but divisible by 11.\n", n);
    } else {
        printf("%d is not divisible by both 7 and 11.\n", n);
    }
    
    return 0;
} 