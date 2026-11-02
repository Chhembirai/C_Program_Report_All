//31
//Input date of birth and calculate how many days you have lived till now 
#include <stdio.h>
int main() {
    int i, d, m, y, cd, cm, cy, td;
    
    printf("Enter current date (DD MM YY) = ");
    scanf("%d %d %d", &cd, &cm, &cy);
    printf("Enter your date of birth (DD MM YY) = ");
    scanf("%d %d %d", &d, &m, &y);

    td = (cy - y) * 365;
    td += (cm - m) * 30;
    td += (cd - d);    
    
    printf("You have lived for approximately %d days.\n", td);
    return 0;
}