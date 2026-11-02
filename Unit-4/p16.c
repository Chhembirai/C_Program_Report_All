//C Program to create a structure name student that has name, roll no, marks and remarks as the member. Assume appropriate type and size of member. use this structure to read and display records of 5 studets
#include <stdio.h>
#include <string.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
    char remarks[100];
};
int main() {
    struct student s[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        printf("Remarks: ");
        scanf("%s", s[i].remarks);
    }
    printf("Student Records:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s,", s[i].name);
        printf(" Roll No: %d,", s[i].roll_no);
        printf(" Marks: %.2f,", s[i].marks);
        printf(" Remarks: %s\n", s[i].remarks);
    }
    return 0;
}