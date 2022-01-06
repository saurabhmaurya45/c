// WAP to check whether a number is even or odd without using arithmetic operator
#include<stdio.h>

int main(){
    int number;
    printf("Enter number to check whether it is odd or even: ");
    scanf("%d",&number);
    int flag=0;
    if((number&1)==1){
        printf("%d is odd",number);
    }
    else
    {
        printf("%d is even",number);
    }
    return 0;
}