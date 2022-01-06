// Given two array 1,2,3,4,5 and 2,3,1,0,5. Find which no is not present in sencond array
#include<stdio.h>

int main(){
    int arr1[]={1,2,3,4,5},arr2[]={2,1,0,5};
    int flag=0;

    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
        for (int j = 0; j < sizeof(arr2)/sizeof(arr2[0]); j++)
        {
            if (arr1[i]==arr2[j])
            {
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
        if (flag==0)
        {
            printf("%d,",arr1[i]);
        }  
    }
    printf(" is not present in array 2");
    return 0;
}