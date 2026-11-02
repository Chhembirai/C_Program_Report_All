//C program to create employee.txt file and write ID name, post and salary of 3 employees in it
#include <stdio.h>
int main(){
    FILE *fp;
    int id[3];
    char name[3][50], post[3][50];
    float salary[3];
    fp = fopen("employee.txt", "w");
    if (fp == NULL)
    {        printf("Error opening file!");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        printf("Enter ID, Name, Post and Salary of employee %d: ", i + 1);
        scanf("%d %s %s %f", &id[i], name[i], post[i], &salary[i]);
        fprintf(fp, "ID: %d\nName: %s\nPost: %s\nSalary: %.2f\n", id[i], name[i], post[i], salary[i]);
    }
    
    fclose(fp);
    return 0;
}