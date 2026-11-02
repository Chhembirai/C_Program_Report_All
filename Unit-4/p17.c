//C program to create structure name employee that has name, salary, age and department as member stored in an array and display it with the average salary and age of 20 employees
#include <stdio.h>
#include <string.h>
struct employee {
    char name[50];
    float salary;
    int age;
    char department[50];
};
int main() {
    struct employee e[20];
    int i;
    float total_salary = 0;
    int total_age = 0;
    for (i = 0; i < 20; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("Age: ");
        scanf("%d", &e[i].age);
        printf("Department: ");
        scanf("%s", e[i].department);

        total_salary += e[i].salary;
        total_age += e[i].age;
    }

    printf("Employee Records:\n");
    for (i = 0; i < 20; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s,", e[i].name);
        printf(" Salary: %.2f,", e[i].salary);
        printf(" Age: %d,", e[i].age);
        printf(" Department: %s\n", e[i].department);
    }

    printf("\nAverage Salary: %.2f\n", total_salary / 20);
    printf("Average Age: %.2f\n", (float)total_age / 20);

    return 0;
}