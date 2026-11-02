//Program to perform multiplication of two matrices
#include <stdio.h>
int main(){
    int i, j, k, rowsA, colsA, rowsB, colsB;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &rowsA, &colsA);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &rowsB, &colsB);
    if(colsA != rowsB){
        printf("Error: Number of columns of first matrix must be equal to number of rows of second matrix.\n");
        return 1;
    }
    int matrixA[rowsA][colsA], matrixB[rowsB][colsB], result[rowsA][colsB];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < colsA; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rowsB; i++){
        for(j = 0; j < colsB; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }
    // Initialize result matrix to zero
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < colsB; j++){
            result[i][j] = 0;
        }
    }
    // Matrix multiplication
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < colsB; j++){
            for(k = 0; k < colsA; k++){           
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    printf("Result of matrix multiplication:\n");
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < colsB; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}