//pattern for half pyramid in square of column numbers from 1 to 5
#include<stdio.h>
int main(){
    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d\t", j*j);
        }
        printf("\n");
    }
    return 0;
}