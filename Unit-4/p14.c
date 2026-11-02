//C program to initialize structure variable
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Initialize structure variable
    struct Student s1 = {1, "Ram", 85.5};
    struct Student s2 = {2, "Bob", 90.0};

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