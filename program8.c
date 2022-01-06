/*
If a five-digit number is input through the keyboard, write a
program to reverse the number
*/

#include <stdio.h>

int main()
{
    /*Declaring and initializing variables*/
    int value, dig1, dig2, dig3, dig4, dig5, reverse, temp;

    /*prompt to take the input*/
    printf("Please enter a five-digit number: ");

    /*Taking input*/
    scanf("%d", &value);
    temp = value;

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
    value = value / 10;
    dig5 = value % 10;

    reverse = (dig1 * 10000) + (dig2 * 1000) + (dig3 * 100) + (dig4 * 10) + (dig5);

    /*showing Results*/
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   By reversing %d it becomes : %d", temp, reverse);

    return 0;
}
