//pattern for character from a to e in half pyramid
#include<stdio.h>
int main(){
    int i, j;
    char ch;
    for(i=1; i<=5; i++){
        ch = 'a';
        for(j=1; j<=i; j++){
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}