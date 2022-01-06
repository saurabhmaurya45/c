// WAP to find factorial

#include <stdio.h>
int main() {
	int n, fact=1;
	printf("Enter number to find out factorial:\n");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d:\n",n,fact );
	return 0;
}