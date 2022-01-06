/*To find out GCD*/
#include <stdio.h>

void main()
{
	int a,b,temp;
	printf("Enter the numbers of which you want to find out GCD:\n");
	scanf("%d %d",&a,&b);
	if (a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	while((b%a)!=0)
	{
		temp=b%a;
		b=a;
		a=temp;
	}
	printf("The GCD is: %3.2f\n", (float)(a));
}