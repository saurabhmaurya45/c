// WAP to count the no of vowel and consonent in a string
#include<stdio.h>
#include<string.h>

int main(){
    char str[100],vowel=0,consonent=0;
    printf("Enter string: ");
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='a'|str[i]=='e'|str[i]=='i'|str[i]=='o'|str[i]=='u'|str[i]=='A'|str[i]=='E'|str[i]=='I'|str[i]=='O'|str[i]=='U')
        {
            vowel++;
        }
        if (str[i]=='B'|str[i]=='b'|str[i]=='c'|str[i]=='C'|str[i]=='d'|str[i]=='D'|str[i]=='f'|str[i]=='F'|str[i]=='g'|str[i]=='G'|
            str[i]=='h'|str[i]=='H'|str[i]=='j'|str[i]=='J'|str[i]=='k'|str[i]=='K'|str[i]=='l'|str[i]=='L'|str[i]=='m'|str[i]=='M'|
            str[i]=='n'|str[i]=='N'|str[i]=='p'|str[i]=='P'|str[i]=='q'|str[i]=='Q'|str[i]=='r'|str[i]=='R'|str[i]=='s'|str[i]=='S'|
            str[i]=='t'|str[i]=='T'|str[i]=='u'|str[i]=='U'|str[i]=='v'|str[i]=='V'|str[i]=='w'|str[i]=='W'|str[i]=='x'|str[i]=='X'|
            str[i]=='y'|str[i]=='Y'|str[i]=='z'|str[i]=='Z')
        {
            consonent++;
        }
    }
    printf("No of Vowels: %d\nNo of Consonents: %d",vowel,consonent);

    return 0;
}