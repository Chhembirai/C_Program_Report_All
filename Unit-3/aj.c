//Program to find the greater among two numbers using functions
#include <stdio.h>
int grtr(int, int);
int main(){
    int a, b, cmp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    cmp = grtr(a, b);
    if(cmp == a){
        printf("%d is greater than %d\n", a, b);
    } else if(cmp == b){
        printf("%d is greater than %d\n", b, a);
    }
    return 0;
}
int grtr(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}