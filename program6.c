/*

Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.

*/

#include <stdio.h>

int main()
{
    int c, d;
    printf("Enter two numbers\n");
    // taking input
    scanf("%d %d", &c, &d);
    printf("Entered values are: %d %d\n", c, d);
    int temp = 0;
    //swaping the content
    temp = c;
    c = d;
    d = temp;
    printf("Swaped values are: %d %d\n", c, d);
    return 0;
}
