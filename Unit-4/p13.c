//C program to demonstrate calloc, malloc, realloc and free functions
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Using malloc to allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Input values into the array
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output the elements of the array
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Using realloc to resize the array
    int newSize;
    printf("Enter new size for the array: ");
    scanf("%d", &newSize);
    
    arr = (int*)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1; // Exit if memory reallocation fails
    }

    // Input values into the resized array if new size is greater than old size
    if (newSize > n) {
        printf("Enter %d more integers: ", newSize - n);
        for (int i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Output the elements of the resized array
    printf("Resized array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}