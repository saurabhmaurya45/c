/*
Problem No:2 The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimeters.
*/


#include <stdio.h>
int main()
{
    float dist;
    printf("Enter the distance to be converted:");
    // taking distance from user
    scanf("%f", &dist);
    printf("%f\n", dist);
    // calculating distance in different units
    float meters = dist * 1000;
    float feet = meters * 3.280839895;
    float inches = feet * 12;
    float centimeters = meters * 100;
    // printing calculated values
    printf("The distance in meters:%fm\n", meters);
    printf("The distance in feet:%fft\n", feet);
    printf("The distance in inches:%fin\n", inches);
    printf("The distance in centimeters:%fcm\n", centimeters);
    return 0;
}