// How to find the 1st and 2nd highest  and lowest number in array

#include<stdio.h>

int main(){
    int arr[]={10,45,25,48,48,54,25,77,99,44,77,66};
    int max=arr[0],sec_max,min=arr[0],sec_min;

    for (int i = 2; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]>max)
        {
            sec_max=max;
            max=arr[i];
        }
        else if (arr[i] < sec_min && arr[i] != min)
        {
         sec_min = arr[i];   
        }
        if (arr[i]<min)
        {
            sec_min=min;
            min=arr[i];
        }
        else if (arr[i] < sec_min && arr[i] != min)
        {
            sec_min = arr[i];
        }
    }
    printf("Max: %d\nSecond maximum: %d\nMinimum: %d\nSecond minimum: %d", max,sec_max,min,sec_min );
    return 0;
}