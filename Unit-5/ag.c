//C program to file named data.txt, write series of N integers in it then read the number and sort odd in odd.txt and even in even.txt files.
#include <stdio.h>
int main(){
    FILE *dataFile, *oddFile, *evenFile;
    int N, num;
    dataFile = fopen("data.txt", "w");
    if (dataFile == NULL)
    {        printf("Error opening data file!");
        return 1;
    }
    printf("Enter the number of integers (N): ");
    scanf("%d", &N);
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d\n", num);
    }
    
    fclose(dataFile);
    dataFile = fopen("data.txt", "r");
    if (dataFile == NULL)
    {        printf("Error opening data file!");
        return 1;
    }
    oddFile = fopen("odd.txt", "w");
    if (oddFile == NULL)
    {        printf("Error opening odd file!");
        fclose(dataFile);
        return 1;
    }
    evenFile = fopen("even.txt", "w");
    if (evenFile == NULL)
    {        printf("Error opening even file!");
        fclose(dataFile);
        fclose(oddFile);
        return 1;
    }
    while (fscanf(dataFile, "%d", &num) == 1) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }
    printf("Numbers sorted into odd.txt and even.txt successfully!");
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);
    return 0;
}