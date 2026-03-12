//Program to convert lowercase to uppercase and vice versa using string functions
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';
    char result[50];
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            result[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        } else {
            result[i] = str[i]; // Non-alphabetic characters remain unchanged
        }
    }
    result[strlen(str)] = '\0'; // Null-terminate the result string
    printf("Converted string: %s\n", result);
    return 0;
}