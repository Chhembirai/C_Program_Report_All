//Program to read string from user and check whether it is palindrome or not
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    int pldrme = 1; // Assume it is a palindrome
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1]){
            pldrme = 0; // Not a palindrome
            break;
        }
    }
    if(pldrme == 1){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}