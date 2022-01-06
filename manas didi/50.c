// WAP to find whether a number is perfect no or not
#include <stdio.h>

int main(){
    int number, sum=0;

    printf("Enter no to check whether it is perfect or not: ");
    scanf("%d",&number);

    for (int i = 1; i < number; i++)
    {
        if (number%i==0)
        {
            sum+=i;
        }
    }
    if (sum==number)
    {
        printf("%d is perfect number",number);
    }
    else
    {
        printf("%d is not a perfect number",number);
    }
    return 0;
}