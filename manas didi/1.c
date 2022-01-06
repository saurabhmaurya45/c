// Write a code to check whether a string is palindrome or  not

#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    int len=strlen(string);
    int status=0;
    scanf("%s",string);
    for (int i = 0; i<len; i++){
        if (string[i]!=string[len-i-1]){
            status=1;
            break;
        }
    }
    if (status)
    {
        printf("String is not palindrome");
    }
    else{
        printf("String is palindrome");
    }

    return 0;
}