//Program to search an element in an array using sequential search
#include <stdio.h>
int main(){
    int i, n, arr[10]={5,24,91,16,54,6,76,30,24,8}, key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i=0; i<10; i++){
        if(arr[i] == key){
            printf("%d found at index %d\n", key, i);
            return 0;
        }
    }
    printf("Element not found in the array\n");
    return 0;
}