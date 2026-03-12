//Program to find the length of string by counting space and without counting space
#include <stdio.h>
int main(){
    char str[50];
    int len = 0, spc = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++){
        len++;
        if(str[i] == ' '){
            spc++;
        }
    }
    printf("Length with including spaces: %d\n", len-1); // Subtracting 1 to exclude the newline character added by fgets
    printf("Length with excluding spaces: %d\n", len-spc-1); // Subtracting space and 1 to exclude spaces and newline character
    return 0;
}