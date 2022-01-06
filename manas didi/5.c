// WAP to count occurence of a given character in the string

#include<stdio.h>
#include<string.h>

int main(){
    char st[]="aabbcdeffssderfddreffdtgvgrfdefd";
    char req_char;
    int i,count=0;
    printf("Enter character for which you want the count: ");
    scanf("%c",&req_char);
    for(i=0;st[i]!=strlen(st);i++){
        if (req_char==st[i])
        {
            count++;
        }
    }
    printf("The count of the character %c is %d\n",req_char,count);    
    return 0;
}
