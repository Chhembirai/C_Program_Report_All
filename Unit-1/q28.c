//28
//Input any character and find whwther it is capital, small, digit or symbol
#include <stdio.h>
int main() {
    char c;
    
    printf("Enter any character = ");
    scanf("%c", &c);
    
    if (c >= 'A' && c <= 'Z') {
        printf("Capital letter.\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("Small letter.\n");
    } else if (c >= '0' && c <= '9') {
        printf("Digit.\n");
    } else {
        printf("Special symbol.\n");
    }
    
    return 0;
}