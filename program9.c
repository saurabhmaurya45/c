/*
This program takes a four-digit integer from user, 
and shows sum of first and last digit.
*/
#include <stdio.h>
int main()
{

    /*Declaring and initializing variables*/
    int value, dig1, dig2, dig3, dig4, sum;

    /*prompt to take the input*/
    printf("Please enter a foure-digit number: ");

    /*Taking input*/
    scanf("%d", &value);

    /*Calculations*/
    dig1 = value % 10;

    /* e.g. if value is 12345 then 12345 % 10 gives 5*/

    value = value / 10;

    /* '12345/10' gives '1234.5' but this is integer division so digit/s after '.' will
    be dropped and we get '1234'*/

    dig2 = value % 10;

    /*now '1234 % 10' gives '4' and so on*/
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;

    sum = dig4 + dig1;

    /*showing Results*/
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   Sum of %d and %d is: %d", dig4, dig1, sum);
    return 0;
}
