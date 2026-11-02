//30
//Input income and calculate tax on basis of income, gender and marital status
#include <stdio.h>
int main() {
    int i, t;
    char g, m;
    
    printf("Enter your income = ");
    scanf("%d", &i);
    printf("Enter your marital status (S for single, M for married) = ");
    scanf(" %c", &m);
    printf("Enter your gender (if female press F or for male press M) = ");
    scanf(" %c", &g);
    
    if (m == 'S') {
        if (i <= 400000) {
            t = 0.01*i;
        } else if (i <= 500000 && i > 400000) {
            t = 4000 + 0.1*(i - 400000);
        } else if (i <= 750000 && i > 500000) {
            t = 14000 + 0.2*(i - 500000);
        } else if (i <= 1300000 && i > 750000) {
            t = 64000 + 0.3 * (i - 750000);
        } else {
            t = 214000 + 0.35*(i - 1300000);
        }
        

    } else if (m == 'M') {
        if (i <= 450000) {
            t= 0.01 * i;
        } else if (i <= 550000 && i > 450000) {
            t = 4500 + 0.1*(i - 450000);
        } else if (i <= 800000 && i > 550000) {
            t = 14500 + 0.2*(i - 550000);
        } else if (i <= 1350000 && i > 800000) {
            t = 64500 + 0.3*(i - 800000);
        } else {
            t = 219000 + 0.35*(i - 1350000);
        }
        
    }
    printf("Tax is Rs.%d\n", t);

    if (g == 'F') {
        t = t - (0.1*t);
        printf("If female, tax after discount is Rs.%d\n", t);
    }

    return 0;
}