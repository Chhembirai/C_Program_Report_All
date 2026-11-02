//Program to concatenate two strings
#include <stdio.h>
#include <string.h>
int main(){
    char str1[50], str2[50];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters added by fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    char result[100];
    strcpy(result, str1); // Copy first string to result
    strcat(result, str2); // Concatenate second string to result
    printf("Concatenated string: %s\n", result);
    return 0;
}