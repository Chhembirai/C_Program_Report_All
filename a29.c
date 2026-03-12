//Program to read name of the students where no. of students is input by the user and sort them in alphabetical order
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char names[n][50], temp[50];
    for(int i = 0; i < n; i++){
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", names[i]); // Read string with spaces
    }
    // Sort names in alphabetical order using bubble sort
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(strcmp(names[j], names[j + 1]) > 0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("In names in alphabetical order: ");
    for(int i = 0; i < n; i++){
        printf("%s ", names[i]);
    }
    printf("\n");
    return 0;
}