/*
Enter no of rows(only odd numbers are allowed):
5
*
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
        * * *
      * * * * *
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows(only odd numbers are allowed):\n");
    scanf("%d",&n);
    printf("* \n");
    // upper half
    for (int j = 1; j <n ; j++)
    {
        printf("  ");
        for (int l = 0; l < n-j-1; l++)
        {
            printf("  ");
        }
        for (int k = n-j; k <= n+j; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    // lower half
    for (int j = n-1; j >0 ; j--)
    {
        printf("  ");
        for (int l = 0; l < n-j; l++)
        {
            printf("  ");
        }
        for (int k = n-j+1; k <= n+j-1; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    // 2nd lowerhalf
    for (int j = 1; j <=n/2 ; j++)
    {
        printf("  ");
        for (int l = 0; l < n-j-1; l++)
        {
            printf("  ");
        }
        for (int k = n-j; k <= n+j; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}

