//pattern of pyramid of repeating numbers
#include <stdio.h>
int main(){
    int i, j, k;
    for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++){
            printf("\t");
        }
        for(k=i; k>=1; k--){
            printf("%d\t", i);
        }
        for(k=2; k<=i; k++){
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}