/*area__of_circle*/

#include <stdio.h>
#define pi 3.14

float area(float radius)
{
	float area;
	area = pi*radius*radius;
	return area;
}

int main()
{
	/* code */
	float radius, Area;
	scanf("%f",&radius);
	Area=area(radius);
	printf("The computed area is: %5.2f\n",Area );

	return 0;
}