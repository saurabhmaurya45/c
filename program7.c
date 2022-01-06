/*

If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)

*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter 5 digit number:\n");
    // taking input from the user
    scanf("%d", &number);
    int sum = 0;
    // calculating sum
    while (number != 0)
    {
        sum = sum + number % 10;
        number = number / 10;
    }
    printf("The sum of digit is:%d\n", sum);
    return 0;
}
