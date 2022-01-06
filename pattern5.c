/*
* * * * *
  * * * *
    * * *
      * *
        *
*/

#include <stdio.h>

void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("  ");
        }
        for (int k = 5; k > i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}