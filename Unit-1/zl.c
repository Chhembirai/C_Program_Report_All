//38
//Input three numbers and find which is the largest and smallest as well as the largest and the smallest are even or odd
#include <stdio.h>
int main() {
    int a, b, c , l, s;
    
    printf("Enter any three numbers = ");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a >= b && a >= c) {
        l = a;
    } else if (b >= a && b >= c) {
        l = b;
    } else {
        l = c;
    }
    
    if (a <= b && a <= c) {
        s = a;
    } else if (b <= a && b <= c) {
        s = b;
    } else {
        s = c;
    }
    
    printf("Largest number is %d\n", l);
    printf("Smallest number is %d\n", s);
    
    if (l % 2 == 0)
        printf("The largest number %d is even.\n", l);
     else 
        printf("The largest number %d is odd.\n", l);
    
    if (s % 2 == 0) 
        printf("The smallest number %d is even.\n", s);
     else 
        printf("The smallest number %d is odd.\n", s);
    
    return 0;
}