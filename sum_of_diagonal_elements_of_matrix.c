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

    int diagonal1=0,diagonal2=0;

    // addition of diagonal1
    i=0;
    while (i<row1){
        diagonal1+=m1[i][i];
        i++;
    }
    // addition of diagonal2
    i=0;
    j=col1-1;
    while (i<row1){
        diagonal2+=m1[i][j];
        i++;
        j--;
    }

    // printing diagonal elements
    printf("%d %d\n",diagonal1,diagonal2 );
    return 0;
}