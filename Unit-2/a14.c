//Program to copy all elements of an array to another array
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter elements of the array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<n; i++){
        arr2[i] = arr1[i];
    }
    printf("Elements of secondary array are:\n");
    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}