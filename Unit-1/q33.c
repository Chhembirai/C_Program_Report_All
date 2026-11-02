//33
//Input two numbers and find arthematic operators inputted by user
#include <stdio.h>
int main() {
    float a, b;
    char ch;
    
    printf("Enter first float number = ");
    scanf("%f", &a);
    printf("Enter second float number = ");
    scanf("%f", &b);
    printf("Enter an operator (+, -, *, /) = ");
    getchar(); // to consume the newline character left by previous scanf
    ch = getchar();

    switch(ch) {
        case '+':   
            printf("The sum of %.2f and %.2f is %.2f\n", a, b, a + b);
            break;
    
        case '-':
            printf("The subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
            break;
    
        case '*':
            printf("The multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
            break;
    
        case '/':
                printf("The division of %.2f and %.2f is %.2f\n", a, b, a / b);
            break;
    
        default:
            printf("Invalid operator.\n");
    }
 
    return 0;
}