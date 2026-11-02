//C program to store N number of students with name, email, phone number and roll no into file named student.txt and display the content of file
#include <stdio.h>
int main(){
    FILE *fp;
    int N;
    char name[50], email[50], phone[20];
    int rollNo;
    fp = fopen("student.txt", "w");
    if (fp == NULL)
    {        printf("Error opening file!");
        return 1;
    }
    printf("Enter the number of students (N): ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("Enter name, email, phone number and roll no of student %d: ", i + 1);
        scanf("%s %s %s %d", name, email, phone, &rollNo);
        fprintf(fp, "Student %d\nName: %s, Email: %s, Phone: %s, Roll No: %d\n", i+1, name, email, phone, rollNo);
    }
    fclose(fp);
    return 0;
}