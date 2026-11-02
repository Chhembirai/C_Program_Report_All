//C program that show function which can accept a pointer and also accept an array
#include <stdio.h>
int main() {
    int arr[5];
    int *ptr;

    // Input 5 numbers into the array
    printf("Enter numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Assign the address of the first element of the array to the pointer
    ptr = arr;

    // Output the elements of the array using the pointer
    printf("Numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++; // Move the pointer to the next element
    }
    printf("\n");

    return 0;
}