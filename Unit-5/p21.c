//C program to write I study BCA in bca.txt file in write mode
#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("bca.txt", "w");
    if (fp == NULL)
    {        printf("Error opening file!");
        return 1;
    }
    fprintf(fp, "Chhembi Hang Rai. Roll No.16 \nI study BCA");
    fclose(fp);
    return 0;
}