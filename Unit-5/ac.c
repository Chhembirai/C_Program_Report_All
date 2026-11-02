//C program to create a file and let user write in it until user press enter
#include <stdio.h>
int main(){
    FILE *fp;
    char str[100];
    fp = fopen("notes.txt", "w");
    if (fp == NULL)
    {        printf("Error opening file!");
        return 1;
    }
    while (fgets(str, sizeof(str), stdin) != NULL) {
        if (str[0] == '\n') {
            break; // Stop if the user presses enter without typing anything
        }
        fprintf(fp, "%s", str);
    }
    fclose(fp);
    return 0;
}