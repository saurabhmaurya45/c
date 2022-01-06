// WAP to check whether a number is positive or negative

#include <stdio.h>

int main(){
    int n;
    printf("Enter number to check whether it is positive or not: ");
    scanf("%d",&n);
    if(n>=0){
        printf("Number is positive");
    }
    else{
        printf("Number is negative");
    }


    return 0;
}