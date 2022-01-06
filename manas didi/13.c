// WAP to check whether a number is power of 2 or not
#include<stdio.h>

int main(){
    int num=16;
    
    printf("Enter number to check if it is power of 2 or not: ");
    scanf("%d", &num);
    int flag=0, num1;
    num1=num;
    while(num>1){
        if(num%2!=0){
            flag=1;
            break;
        }
        num/=2;
    }
    if(flag==0){
        printf("%d can be written as power of 2",num1);
    }
    else{
        printf("%d cannot be written as power of 2",num1);
    }
    return 0;
}