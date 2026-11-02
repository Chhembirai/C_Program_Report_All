//C program to ask name and age of person and write it in a file named record.txt
#include <stdio.h>
int main(){
    FILE *fp;
    char name[50];
    int age;
    fp = fopen("record.txt", "w");
    if (fp == NULL)
    {        printf("Error opening file!");
        return 1;
    }
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);
    return 0;
}