//21
//Showing implicit type conversion from float or character to integer
#include<stdio.h>
int main() {
    char a = 'A';
    int b;
    float c=22.3;
    
    b =  a + c;

    printf("Character value = %c\n", a);
    printf("Integer value = %d\n", b);
    printf("Float value = %.2f\n", c);
    
    return 0;
}   