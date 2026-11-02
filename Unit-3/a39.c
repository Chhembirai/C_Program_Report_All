//Program to illustrate call by actual value function to swap two numbers
#include <stdio.h>
void swap(int , int ); 
int main() {
    printf("Chhembi Hang Rai, Roll No. 17\n");
    int x = 6, y = 4;
    printf("Before swapping:");
    printf("x = %d, y = %d\n", x, y);
    swap(x , y);
    printf("After swapping:");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
void swap(int a, int b){
    int temp;
    temp = a; //temp gets value of a
    a = b;    //a gets value of b
    b = temp; //b gets value of temp
}