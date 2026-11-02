//Program to read and print a matrix
#include <stdio.h>
int main(){
    int m, n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter elements of the matrix:\n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            scanf("%d", &matrix[i-1][j-1]);
        }
    }
    printf("The matrix is:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}