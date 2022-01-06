#include <stdio.h>


int main(){
    int row1,col1,i,j;
    printf("Enter row of matrix: ");
    scanf("%d",&row1);
    printf("Enter column of matrix: ");
    scanf("%d",&col1);

    // constructing matrix
    int m1[row1][col1],m2[row1][col1],m3[row1][col1];
    // enter elements for the first matrix
    printf("Enter elements in the first matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

    // Enter elements for 2nd matrix
    printf("Enter elements in the second matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    // addition of matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }

    // printing added matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d\t",m3[i][j] );
        }printf("\n");
    }
    return 0;
}