//Program to reverse an array and store it in another array
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], rev[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        rev[i] = arr[n-1-i];
    }
    printf("Reversed array: ");
    for(i=0; i<n; i++){
        printf("%d ", rev[i]);
    }
    printf("\n");
    return 0;
}