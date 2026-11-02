//23
//Input number and find decimal value form integer to float
#include<stdio.h>
int main() {
    int n ;
    float f;

    printf("Enter an integer : ");
    scanf("%d", &n);
    
    f = (float) n / 7;

    printf("The float value is: %.2f\n", f);
    
    return 0;
}