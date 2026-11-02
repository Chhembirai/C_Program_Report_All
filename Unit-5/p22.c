//C program to write I study in to file named college.txt file in append mode
#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("college.txt", "a");
    if (fp == NULL)
    {        printf("Error opening file!");
        return 1;
    }
    fprintf(fp, "Chhembi Hang Rai. Roll No.16 \nI study in Patan Multiple Campus, Patandhoka, Lalitpur.");
    fclose(fp);
    return 0;
}