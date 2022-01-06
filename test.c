/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.
*/

#include <stdio.h>
#include <conio.h>
/*
int main(){
    int i,j,k;
    for (int i = 71; i >=65 ; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c ",j );
        }
        
        for (int k = 71; k>j-1; k--)
        {
            printf(" ");
        }
        for (int k = i; k<70; k++)
        {
            printf(" ");
        }
        for ( j=j-1; j>=65;j-- )
        {
            if (j==71)
            {
                j=70;
                printf("%c",j );
            }
            else
            {
                printf("%c",j );
            }
        }


        printf("\n");
    }

    return 0;
}

*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct empdetails
{
    int empid;
    char *empname;
    float empsalary;

}emp1,emp2,emp3,emp4,emp5;

int main(){
    empdetails emp[10];
    emp1.empid=
    for (int i = 0; i < 10; i++)
    {
        printf("%d, %s, %f\n",i.empid,i.empname,i.empsalary );
    }


    return 0;
}

*/







//#define size 10


/*
int main(){
    int i,j,final,counter=0;
    int largest=0;
    int len;
    char sen[100];
    i=0;
    printf("Enter any sentence: \n");
    gets(sen);
    while(sen[i]!= '\0'){
        len=i;
        while (sen[i]!=' '){
            counter++;
            i++;
        }
        j=i++;
        while(sen[j]==' '){
            sen[j]=sen[j+1];
        }
        if (largest<counter)
        {
            final=len;
            largest=counter;
        }
        i++;
    }
    printf("The text without blank spaces:\n");
    while(sen[final]!=' '){
        printf("%c",sen[final] );
        final++;
    }
    return 0;
}*/


int main(){
    int arr[10]={10,20,30,40,50},n=5,item,pos;
    for(int i=0; i<n;i++){
        printf("%d  \n", arr[i]);
    }
    printf("Enter item you want to add:\n");
    scanf("%d",&item);
    printf("Enter position in which you want to add:\n");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=item;
    n++;
    for(int i=0; i<n;i++){
        printf("%d  \n", arr[i]);
    }

    return 0;
}




