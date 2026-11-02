//Program to accept the price and stock of 5 types of bulb and calculate the total value of the stock
#include <stdio.h>
int main(){
    int i, j, price[5], stock[5], total=0;
    for(i=0; i<5; i++){
        printf("Enter price of bulb %d: ", i+1);
        scanf("%d", &price[i]);
        printf("Enter stock of bulb %d: ", i+1);
        scanf("%d", &stock[i]);
        total += price[i] * stock[i];
    }
    printf("Total price of all bulbs = Rs.%d\n", total);
    return 0;
}