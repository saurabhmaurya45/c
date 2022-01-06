/*
If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.
*/

#include <stdio.h>
int main()
{
    float cost, sale, costitem, profit;

    printf("Please enter total selling price of 15 items: ");
    scanf("%f", &sale);

    printf("\nNow enter total profit on 15 items: ");
    scanf("%f", &profit);

    //Calculations
    cost = sale - profit;
    costitem = cost / 15;

    printf("\nCost price per item: %f", costitem);

    return 0;
}
