/*
If a five-digit number is input through the keyboard, 
write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402.
*/

#include <stdio.h>
int main()
{
    /*Declaring and initializing variables*/
    int value, dig1, dig2, dig3, dig4, dig5, temp;

    /*prompt to take the input*/
    printf("Please enter a five-digit number: ");

    /*Taking input*/
    scanf("%d", &value);
    temp = value;

    /*Calculations*/
    //separating digits
    dig1 = value % 10;
    value = value / 10;
    dig2 = value % 10;
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;
    value = value / 10;
    dig5 = value % 10;

    //adding 1 to each digit
    dig1 = ((dig1 + 1) % 10);
    dig2 = ((dig2 + 1) % 10);
    dig3 = ((dig3 + 1) % 10);
    dig4 = ((dig4 + 1) % 10);
    dig5 = ((dig5 + 1) % 10);

    /*showing Results*/
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   By adding one in each digit of %d it becomes : %d%d%d%d%d", temp, dig5, dig4, dig3, dig2, dig1);

    return 0;
}
