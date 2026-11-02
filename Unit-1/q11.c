//11
//Input principal, rate and time to calculate simple interest
#include<stdio.h>
int main(){
    int p, r, t;
    float s;
    
    printf("Enter principle =");
    scanf("%d", &p);
    printf("Enter rate of interest =");
    scanf("%d", &r);
    printf("Enter time in years =");
    scanf("%d", &t);
    
    s = (p * r * t) / 100;
    printf("Simple Interest is %.2f\n", s);
    
    return 0;
}