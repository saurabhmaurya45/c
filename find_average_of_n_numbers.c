#include <stdio.h>

int main()
{
	/* code */
	int n,i,sum=0,number;
	printf("Total numbers you want to enter:\n" );
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		/* code */
		scanf("%d",&number);
		sum=sum+number;
	}
	float avg=sum/n;
	printf("%5.2f\n",avg );

	return 0;
}