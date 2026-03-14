//12
//Input radius and height to calculate total surface area of cylinder
#include<stdio.h>
#define PI 3.14
int main() {
    int r, h;
    float t;
    
    printf("Enter radius : ");
    scanf("%d", &r);
    printf("Enter height : ");
    scanf("%d", &h);
    
    t = 2 * PI * r * (r+h);
    printf("Total surface area of cylider is %.2f\n", t);
    
    return 0;
}