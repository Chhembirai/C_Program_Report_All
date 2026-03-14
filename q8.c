//8
//Input tempreture and turn from fahrenheit to celsius
#include<stdio.h>
int main(){
    float f, c;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) * 100 / 180;
    printf("Temperature from Fahrenheit is %.2f\n", c);
    
    return 0;
}