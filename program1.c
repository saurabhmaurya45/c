/*
Problem No:1 Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
*/

#include <stdio.h>
int main()
{
    float sal;
    scanf("%f", &sal);
    float allowance = sal * 0.4;
    float rent = sal * 0.2;
    float gross_sal = sal + allowance + rent;
    printf("The gross salary of Ramesh is:%f\n", gross_sal);
    return 0;
}