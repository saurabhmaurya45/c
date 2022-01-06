// WAP to check whether a year is leap year or not
#include<stdio.h>


int main(){
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if (((year%100!= 0) && (year%4==0))||(year%400==0))
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
    return 0;
}