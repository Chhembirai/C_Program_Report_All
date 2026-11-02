//C program to find details of customers having highest and lowest balance in n number of customers with structure of customers name, account number and balance
#include <stdio.h>
#include <string.h>
struct customer {
    char name[50];
    int account_number;
    float balance;
};
int main() {
    int n, i;
    struct customer c[100]; // Assuming a maximum of 100 customers
    struct customer *highest, *lowest;
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Account Number: ");
        scanf("%d", &c[i].account_number);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }
    highest = lowest = &c[0];
    for (i = 1; i < n; i++) {
        if (c[i].balance > highest->balance) {
            highest = &c[i];
        }
        if (c[i].balance < lowest->balance) {
            lowest = &c[i];
        }
    }
    printf("Customer with Highest Balance:\n");
    printf("Name: %s, ", highest->name);
    printf("Account Number: %d, ", highest->account_number);
    printf("Balance: %.2f\n", highest->balance);
    printf("Customer with Lowest Balance:\n");
    printf("Name: %s, ", lowest->name);
    printf("Account Number: %d, ", lowest->account_number);
    printf("Balance: %.2f\n", lowest->balance);
    return 0;
}