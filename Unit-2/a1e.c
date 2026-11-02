//pattern of full pyramid of numbers with palindromic numbers
#include <stdio.h>
int main(){
    int i, j, k;
    for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++){
            printf("\t");
        }
        for(k=i; k>=1; k--){
            printf("%d\t", k);
        }
        for(k=2; k<=i; k++){
            printf("%d\t", k);
        }
        
        printf("\n");
    }
    return 0;
}