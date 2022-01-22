// WAP to check if a string contains only digits
#include<stdio.h>
#include<string.h>

int main(){
    char str[100],vowel=0,consonent=0;
    printf("Enter string: ");
    scanf("%s",str);
    int flag=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i]>='0'&&str[i]<'9'))
        {
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        printf("The string contains only digit");
    }
    else{
        printf("The string does not contain only digits");
    }

    return 0;
}