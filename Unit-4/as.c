//C program to demonstrate use of nested structure
#include <stdio.h>
struct date {
    int d;
    int m;
    int y;
};
struct student {
    char n[50];
    int r;
    struct date dob; // Nested structure
};
int main() {
    struct student s;
    printf("Enter details:\n");
    printf("Name: ");
    scanf("%s", s.n);
    printf("Roll No: ");
    scanf("%d", &s.r);
    printf("DOB: ");
    scanf("%d %d %d", &s.dob.d, &s.dob.m, &s.dob.y);
    printf("Student Details:\n");
    printf("Name: %s, ", s.n);
    printf("Roll No: %d, ", s.r);
    printf("DOB: %02d/%02d/%04d\n", s.dob.d, s.dob.m, s.dob.y);
    return 0;
}