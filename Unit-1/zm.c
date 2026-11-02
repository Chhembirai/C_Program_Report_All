//39
//Input two numbers and display sum of even numbers between them
#include <stdio.h>
int main() {
    int i, n1, n2, s = 0;
    
    printf("Enter first number = ");
    scanf("%d", &n1);
    printf("Enter second number = ");
    scanf("%d", &n2);
 
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
 
    for ( i = 1 + n1; i <= n2; i++) {
        if (i % 2 == 0) {
            s += i;
        }
    }
 
    printf("Sum of even numbers between %d and %d is %d\n", n1, n2, s);
 
    return 0;
}