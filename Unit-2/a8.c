//Program to check whether the number input by the user is palindrome or not
#include <stdio.h>
int main(){
    long n, r=0, d, temp;
    printf("Enter a number: ");
    scanf("%ld", &n);
    temp = n;
    while(n!=0){
        d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    if(temp == r){
        printf("%ld is a palindrome number\n", temp);
    }
    else{
        printf("%ld is not a palindrome number\n", temp);
    }
    return 0;
}