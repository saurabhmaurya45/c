// WAP to reverse the string of an integer without using predefined method
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter string of integers: ");
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        int temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    for(int i=0;i<len;i++){
        printf("%c ", str[i]);
    }
    return 0;
}