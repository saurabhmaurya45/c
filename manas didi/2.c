//WAP which will remove a given chracter from string
#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    char ch;
    int i,j;
    printf("Enter character you want to remove:\n");
    scanf("%c",&ch);
    printf("Enter string:\n");
    scanf("%s",str);
    printf("Inputed string: %s\n character: %c\n",str,ch);

    for ( i = 0; i < strlen(str); i++)
    {
        if(str[i]==ch){
            break;
        }
    }
    for ( j = i; j < strlen(str); j++)
    {
        str[j]=str[j+1];
    }
    printf("Updated string: %s\n character: %c",str,ch);
    

    return 0;
}
