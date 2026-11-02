//C program to show how to use structure in a program
#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    // Declare structure variable
    struct Student s1, s2;

    // Assign values to structure members
    s1.id = 1;
    s1.marks = 85.5;
    s2.id = 2;
    s2.marks = 90.0;

    // Copy string to name member
    snprintf(s1.name, sizeof(s1.name), "Surendra");
    snprintf(s2.name, sizeof(s2.name), "Bobby");

    printf("Student 1:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    printf("Student 2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}