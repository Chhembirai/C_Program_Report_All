//Program to count the number of vowels and consonants in a string
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';
    int vwl = 0, consnt = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vwl++;
            } else {
                consnt++;
            }
        }
    }
    printf("Number of vowels: %d\n", vwl);
    printf("Number of consonants: %d\n", consnt);
    return 0;
}