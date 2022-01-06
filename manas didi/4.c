// WAP to find out the longest palindrome in a string 

#include<stdio.h>
#include<string.h>

struct string_record
{
    int count;
    char str[];

};




int main(){
    char str[]="abba aabccddefeddccbaa sdheryd sberdf waw wdvguugvdw",str1[100];
    int i,j;
    struct string_record str_process;

    for ( i = 0; i < '\0'; i++)
    {
        if(str[i]==' '){
            for ( j = 0; j < i; j++)
            {
                str1[j]=str[j];
                if (str[j]!=str[i-j-1])
                {
                   strcpy(str_process.str,str1);
                   str_process.count=0; 
                }
                else
                {
                    strcpy(str_process.str,str1);
                    str_process.count=strlen(str1);
                }
                
            }
            
        }
    }
    


    return 0;
}