/*

The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.

*/

#include <stdio.h>
#define pi 3.14     //defining default value of pi as 3.14

int main()
{
    int length, breadth, radius;
    printf("Enter length, breadth and radius :\n");
    // taking input
    scanf("%d %d %d", &length, &breadth, &radius);
    // calculating area and perimeter as stated by the problem
    float AreaofRectangle = length * breadth;
    float PerimeterofRectangle = 2 * (length + breadth);
    float AreaofCircle = 4 * pi * radius * radius;
    float CircumferenceofCircle = 4 * pi * radius;
    //printing output
    printf("Area of Rectangle:%f\n", AreaofRectangle);
    printf("Perimeter of Rectangle:%f\n", PerimeterofRectangle);
    printf("Area of Circle:%f\n", AreaofCircle);
    printf("Circumference of Circle:%f", CircumferenceofCircle);
    return 0;
}
