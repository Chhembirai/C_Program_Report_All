//C program to illustrate use of pointer
#include <stdio.h>
int main(){
    int var = 20;   // actual variable declaration.
    int *ip;        // pointer variable declaration.

    ip = &var;      // store address of var in pointer variable

    printf("Value: %d\n", var);
    printf("Address: %p\n", ip);
    printf("Value pointed: %d\n", *ip);

    return 0;
}