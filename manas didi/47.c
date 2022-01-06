// WAP to find the cube root of a given number

#include <stdio.h>
#include <math.h>

int main()
{
	int num;
    printf("Enter number to find cube root: ");
    scanf("%d",&num);
    printf("The cube root of %d is : %f",num,cbrt(num));
	return 0;	
}