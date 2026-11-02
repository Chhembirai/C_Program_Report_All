//3
//Show value of inputted integer, float, double and character
#include<stdio.h>
int main(){
    int a = 10;
    float b= 5.5;
    double d = 20.99;
    char c = 'A';

    printf("Integer value: %d\n", a);
    printf("Float value: %.f\n", b);
    printf("Double value: %.2lf\n", d);
    printf("Character value: %c\n", c);
    return 0;
}
