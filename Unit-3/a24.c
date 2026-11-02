//Program to demonstrate string initialization and printing
#include <stdio.h>
int main(){
    char str[] = "Hello", str2[]="World", str3[]={'H','e','l','l','o','\0'};
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);
    return 0;
}