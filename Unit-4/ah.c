//C program to use an array of pointers to character to store list of strings
#include <stdio.h>
int main() {
    const char *fruits[] = {"Apple", "Banana", "Cherry", "Berry"};
    int num_fruits = sizeof(fruits) / sizeof(fruits[0]);
    printf("List of fruits:\n");
    for (int i = 0; i < num_fruits; i++)
    {
        printf("%s\n", fruits[i]); // Print each fruit name
    }
    return 0;
}   