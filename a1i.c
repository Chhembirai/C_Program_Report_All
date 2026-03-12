//pattern for inverted half pyramid from A to F
#include<stdio.h>
int main(){
    int i, j;
    for(i=1; i<=6; i++){
        char ch = 'A';
        for(j=1; j<=6-i+1; j++){
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}