//C program to demonstrate the NULL pointer
#include <stdio.h>
int main() {
    int *ptr = NULL; // Initialize pointer to NULL
    if (ptr == NULL)
    {
        printf("Pointer is NULL. No memory allocated.\n");
    }
    else
    {
        printf("Pointer is not NULL. Memory allocated.\n");
    }
    return 0;
}