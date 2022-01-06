/*find_the_largest_of_three_numbers*/
#include <stdio.h>

int main(){

	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if (b>max && c<b)
	{
		/* code */
		max=b;
		printf("The maximum of entered number is: %d\n",max );
	}else if (c>max && b<c)
	{
		/* code */
		max=c;
		printf("The maximum of entered number is: %d\n",max );
	}else{
		printf("The maximum of entered number is: %d\n",max );
	}

	return 0;
}


/*	
	Another approach 
	#more efficient
*/

int second_approach()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>=b)
	{
		/* code */
		if (a>=c)
		{
			/* code */
			printf("The maximum number is: %d\n", a);
		}
		else
		{
			printf("The maximum number is: %d\n", c);
		}
	}
	else
	{
		/* code */
		if (b>=c)
		{
			/* code */
			printf("The maximum number is: %d\n", b);
		}
		else
		{
			printf("The maximum number is: %d\n", c);
		}
	}
}



/*finding the maximum of three numbers*/

#include <stdio.h>

int maximum(int,int,int);  /*function prototype*/
int main()
{
	int a, b, c;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&a, &b,&c);
	printf("maximum is %d\n",maximum(a,b,c) );
	return 0;
}

/*function maximum definition*/
int maximum(int x, int y, int z)
{
	int max=x;
	if (y>max)
	{
		max=y;
	}
	if (z>max)
	{
		max=z;
	}
	return max;
}
