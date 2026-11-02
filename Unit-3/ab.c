//Program to read strings with spaces and without spaces and print them
#include <stdio.h>
int main(){
    char str1[50], str2[50];
    printf("Enter string without space: ");
    scanf("%s", str1);
    printf("Enter string with space: ");
    scanf(" %[^\n]s", str2);
    printf("You entered: %s  and  %s\n", str1, str2);
    return 0;
}