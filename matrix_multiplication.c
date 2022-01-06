#include <stdlib.h>
#include <stdio.h>

int main(){
    int row1,col1,row2,col2,i,j;
    printf("Enter row of 1st matrix: ");
    scanf("%d",&row1);
    printf("Enter column of 1st matrix: ");
    scanf("%d",&col1);
    printf("Enter row of 2st matrix: ");
    scanf("%d",&row2);
    printf("Enter column of 2st matrix: ");
    scanf("%d",&col2);
    if (row2!=col1)
    {
        printf("Enter valid value for row and column:\n");
        printf("column of 1st matrix must be equal to the row of 2nd matrix:\n");
        exit(0);
    }

    int m1[row1][col1],m2[row2][col2],m3[row1][col2];
    // enter elements for the first matrix
    printf("Enter elements in the first matrix:\n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    // Enter elements for 2nd matrix
    printf("Enter elements in the second matrix:\n");
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for ( i = 0; i < row1; i++)
    {
        
        for ( j = 0; j < col2; j++)
        {
            int sum=0;
            for (int k = 0; k < row2; k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            m3[i][j]=sum;
        }
    }
    // printing multiplied matrix
    for ( i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d\t",m3[i][j] );
        }printf("\n");
    }
    return 0;
}