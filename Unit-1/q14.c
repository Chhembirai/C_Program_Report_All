//14
//Input a number and find if it lies between 1 and 100
#include<stdio.h>
int main() {
    int n;
    
    printf("Enter a number=");
    scanf("%d", &n);
   
    if (n > 1 && n <= 100)
        printf("Number lies between 1 and 100\n");
     else 
        printf("Number does not lie between 1 and 100\n");
        
    return 0;
}