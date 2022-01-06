/*To find the root of ax^2+bx+c=0*/

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, D;     //a,b,c are the constants and D is discriminent
    float root1, root2;
    printf("Enter the coefficient a,b,c:\n");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);          //calculating D
    //Checking conditions and accordingly taking action
    if (D > 0)
    {

        printf("Roots are unequal and unique and they are:\n");
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("%3.2f %3.2f \n", root1, root2);
    }
    else if (D == 0)
    {

        printf("Roots are equal and they are:\n");
        root1 = (-b + sqrt(D)) / (2 * a);
        printf("%3.2f %3.2f \n", root1, root1);
    }
    else
    {
        printf("Roots are imaginary and they are:\n");
        printf("Real part: %3.2f\n", (-b) / (2 * a));
        printf("Imaginary part: i%3.2f, -i%3.2f\n", sqrt(D) / (2 * a));
    }
    return 0;
}