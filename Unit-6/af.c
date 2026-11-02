//C program to demonstrate use of command line argument using c
#include <stdio.h>
int main(int argc, char *argv[]){
    printf("Number of command line arguments: %d\n", argc);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}