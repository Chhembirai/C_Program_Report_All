//37
//Input of name, address, age, weight and height and display using string functions
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char n[50], ad[100];
    int a;
    float w, h;
    
    printf("Enter your name = ");
    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = 0; 

    printf("Enter your address = ");
    fgets(ad, sizeof(ad), stdin);
    ad[strcspn(ad, "\n")] = 0; //For removing trailing of newline

    printf("Enter your age = ");
    scanf("%d", &a);

    printf("Enter your weight (in kg) = ");
    scanf("%f", &w);

    printf("Enter your height (in meters) = ");
    scanf("%f", &h);

    system("clear"); //CLS function in linux
    printf("Displaying Information\n");
    printf("Name: %s\n", n);
    printf("Address: %s\n", ad);
    printf("Age: %d years\n", a);
    printf("Weight: %.2f kg\n", w);
    printf("Height: %.2f meters\n", h);

    return 0;
}