//36
//Input qudratic equation and find their roots
#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    float d, r1, r2;
    
    printf("Quadratic equation: ax^2 + bx + c\n");
    printf("Enter coefficient a = ");
    scanf("%d", &a);
    printf("Enter coefficient b = ");
    scanf("%d", &b);
    printf("Enter coefficient c = ");
    scanf("%d", &c);
    
    d= b*b - 4*a*c;
    r1 = (-b + sqrt(d)) / (2*a);
    r2 = (-b - sqrt(d)) / (2*a);
    printf("x = %.2f\n", r1);
    printf("x = %.2f\n", r2);
    
    return 0;
}