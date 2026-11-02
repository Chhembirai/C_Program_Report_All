//Program to sort an array implementing selection sort
#include <stdio.h>
int main(){
    int i, j, min_idx, temp, arr[10]={5,24,91,6,54,76,86,30,49,8};
    printf("Original array: ");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i=0; i<=9; i++){
        min_idx = i;
        for(j=i+1; j<10; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Selection sorted array: ");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }    
    printf("\n");
    return 0;
}