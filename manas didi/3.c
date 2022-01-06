// WAP to find first non-repeated character

#include<stdio.h>
#include<string.h>

int main(){
    char st[]="aabbcdeffssderfddreffdtgvgrfdefd";
    char c[256]={0};
    int i;
    for(i=0;st[i]!='\0';i++){
        c[st[i]]++;
    }
    for ( i = 0; i < st[i]!='\0'; i++)
    {
        if(c[st[i]]==1){
            printf("\n%c\n",st[i]);
            break;
        }
    }
    
    return 0;
}