//C program to open a file and copy its content to another file
#include <stdio.h>
int main(){
    FILE *source, *destination;
    char ch;
    source = fopen("notes.txt", "r");
    if (source == NULL)
    {        printf("Error opening source file!");
        return 1;
    }
    destination = fopen("record.txt", "w");
    if (destination == NULL)
    {        printf("Error opening destination file!");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully!");
    fclose(source);
    fclose(destination);
    return 0;
}