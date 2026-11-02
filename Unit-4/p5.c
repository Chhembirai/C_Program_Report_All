//C program to display name, age and mark of student using structure variable
#include <stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int age, mark;
    };
    struct student s1;
    printf("Enter name of student: ");
    scanf("%s", s1.name);
    printf("Enter age of student: ");
    scanf("%d", &s1.age);
    printf("Enter mark of student: ");
    scanf("%d", &s1.mark);
    printf("Name: %s\nAge: %d\nMark: %d\n", s1.name, s1.age, s1.mark);
    return 0;
}