//4
//Show the size occupied by integer, float, double and character.
#include<stdio.h>
int main(){
    int w;
    float x;
    double y;
    char z;
    printf("Size of integer: %lu bytes\n", sizeof(w));
    printf("Size of float: %lu bytes\n", sizeof(x));
    printf("Size of double: %lu bytes\n", sizeof(y));
    printf("Size of short: %lu bytes\n", sizeof(short));    
    printf("Size of char: %lu bytes\n", sizeof(z));
    printf("Size of long: %lu bytes\n", sizeof(long));
    return 0;
}