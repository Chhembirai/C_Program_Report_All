//Program to square if odd and cube if even from 1 to 20
#include<stdio.h>
int main(){
    printf("Manjish Thapa, Roll No.33\n");
    int i;
    for(i=1; i<=20; i++){
        if(i%2==0){
            printf("%d is even, cube = %d\n", i, i*i*i);
        }
        else{
            printf("%d is odd, square = %d\n", i, i*i);
        }
    }
    return 0;
}