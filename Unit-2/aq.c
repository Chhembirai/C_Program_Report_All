//Program to find sum, average, largest and smallest of elements of an array input by the user
#include <stdio.h>
int main(){
    int n, i, sum=0, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    float avg = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average of elements: %.2f\n", avg);
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
    return 0;
}