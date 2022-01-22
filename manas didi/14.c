// WAP to check whether a number is palindrome or not

#include <stdio.h>

int main(){
    int n,temp,arr[100],digit_count=0;
    printf("Enter number to check whether it is palindrome or not: ");
    scanf("%d",&n);
    temp=n;
    
    while(n>0){
        arr[digit_count]=n%10;
        digit_count++;
        n=n/10;
    }

    int flag=1;
    for(int i=0; i<digit_count/2;i++){
        if(arr[i]!=arr[digit_count-i-1]){
            flag=0;
            break;
        }
    }

    if(flag){
        printf("%d is palindrome",temp);
    }
    else{
        printf("%d is not palindrome",temp);
    }

    return 0;
}