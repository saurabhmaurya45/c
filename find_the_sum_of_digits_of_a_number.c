/*find the sum of digits of a number*/
#include <stdio.h>

int main()
{
	int n,sum,number;
	printf("Enter the number you want to add:");
	scanf("%d",&n);
	number=n;
	sum=0;
	while (n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("The sum of the given number %d is %d", number ,sum);

	return 0;
}