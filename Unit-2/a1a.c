//Program to make pattern of half pyramid of numbers from 1 to 5 descending order
#include <stdio.h>
int main(){
    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}