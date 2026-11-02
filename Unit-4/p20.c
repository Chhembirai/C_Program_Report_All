//C program to create employee structure name address salary and display their records in ascending order of name of 5 employee
#include <stdio.h>
#include <string.h>
struct employee {
    char name[50];
    char address[100];
    float salary;
};
int main() {
    struct employee e[5], temp;
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Address: ");
        scanf("%s", e[i].address);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    // Sorting employees in ascending order of name
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (strcmp(e[j].name, e[j + 1].name) > 0) {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    printf("Records:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s,", e[i].name);
        printf(" Address: %s,", e[i].address);
        printf(" Salary: %.2f\n", e[i].salary);
    } 
    return 0;
}