/*
Problem No:4 Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees.
*/



#include <stdio.h>
int main()
{
    float Fahrenheit;
    printf("Enter the temperature in Fahrenheit:");
    // taking input
    scanf("%f", &Fahrenheit);
    // calculating  temperature in centigrade
    float Centigrade = (Fahrenheit - 32) * 5 / 9;
    printf("The temperature in Centigrade:%f\n", Centigrade);
    return 0;
}