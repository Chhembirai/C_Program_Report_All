//Program to perform addition of two matrices
#include <stdio.h>
int main(){
    int i, j, r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);
    if(r1 != r2 || c1 != c2){
        printf("Error: Incompatible matrix dimensions\n");
        return 1;
    }
    int matrixA[r1][c1], matrixB[r2][c2], result[r1][c1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }
    // Matrix addition
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    printf("Sum of matrices:\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}