//9
//Input radius and calculate area and circumference
#include<stdio.h>
int main(){
    float r, a, c;
    const float PI = 3.14;
    
    printf("Enter radius of circle = ");
    scanf("%f", &r);
    
    a = PI * r * r;
    c = 2 * PI * r;
    
    printf("Area of circle is %.2f\n", a);
    printf("Circumference of circle is %.2f\n", c);
    
    return 0;
}