//22
//Input two numbers and find explicit cnversion from integers to float
#include<stdio.h>
int main() {
    int a=7, b=3;
    
    float c = (float)a / b;
    printf("The division of %d and %d is: %.2f\n", a, b, c);
    
    return 0;
}