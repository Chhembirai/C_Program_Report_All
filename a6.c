//Program to check prime number or not of the number input by the user
#include <stdio.h>
int main(){
    int i, n, c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1){
        printf("%d is not a prime number nor composite number\n", n);
        return 0;
    }
    for(i=1; i<=(n); i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
    return 0;
}