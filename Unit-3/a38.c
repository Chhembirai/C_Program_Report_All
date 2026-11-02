//Program to find the minimum value in an array in function
#include <stdio.h>
int findmin(int a[], int size);
int main(){
    int a[10], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Minimum value in the array = %d\n", findmin(a, n));
    return 0;
}
int findmin(int a[], int size){
    int i, min = a[0];
    for (i = 1; i < size; i++){
        if (a[i] < min){
            min = a[i];
        }
    }
    return min;
}