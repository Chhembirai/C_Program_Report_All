//29
//Input sales of one day and calculate the commision
#include<stdio.h>
int main() {
    int s, c;
    
    printf("Enter sales amount of one day = ");
    scanf("%d", &s);
    
    if (s < 5000) {
        c = s * 1 / 100;
    } else if (s >= 5000 && s < 8000) {
        c = s * 3 / 100;
    } else if (s >= 8000 && s < 11000) {
        c = s * 5 / 100;
    } else {
        c = s * 10 / 100;
    }

    printf("The commission is %d\n", c);
    
    return 0;
}