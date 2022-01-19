// WAP to find all permutation of string
#include<stdio.h>
#include <string.h>

void swap(char *x, char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void permutate(char *arr, char l, char r){
    char i;
    if(l==r){
        printf("%s\n",arr);
    }
    else{
        for(i=l; i<=r; i++){
            swap((arr+l),(arr+i));
            permutate(arr,l+1,r);
            //backtraking
            swap((arr+l),(arr+i));
        }
    }

}


int main(){
    char *str;
    printf("Enter string to print its permutation: ");
    scanf("%s",str);
    char n=strlen(str);
    permutate(str,0,n-1);

    return 0;
}
