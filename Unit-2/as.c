//Program to search an element in an array input by the user using linear search
#include <stdio.h>
int main(){
    int n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++){
        if(arr[i] == key){  
            found = 1;
            break;
        }
    }
    if(found){
        printf("Element %d found at position %d\n", key, i);
    } else {
        printf("Element not found in the array\n");
    }
    return 0;
}