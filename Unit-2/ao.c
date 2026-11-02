//Program to reverse a number input by the user
#include <stdio.h>
int main(){
    int n, r=0, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while(n!=0){
        d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    printf("Reverse of %d is %d\n",temp, r);
    return 0;
}