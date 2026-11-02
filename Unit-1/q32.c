//32
//Input principal, time and rate from user to calculate compound interest
#include<stdio.h>
#include<math.h>
int main() {
    int p, t, r, i, ca;
    
    printf("Enter principal amount = ");
    scanf("%d", &p);
    printf("Enter time in years = ");
    scanf("%d", &t);
    printf("Enter rate of interest = ");
    scanf("%d", &r);
    
    ca = p * pow ((1 + r / 100.0), t);
    ca = ca - p;
    printf("Compound Interest after %d years : %d\n", t, ca);

    return 0;
}