// WAP to calculate the square root of a given number

#include <stdio.h>
#include <math.h>

int main()
{
	int num;
    printf("Enter number to find square root: ");
    scanf("%d",&num);
    printf("The square root of %d is : %f",num,sqrt(num));
	return 0;	
}