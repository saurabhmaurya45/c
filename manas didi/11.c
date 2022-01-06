// How to find all pairs in an array of integers whose sum is equal to the given number

#include<stdio.h>

int main(){
    int arr[]={47,5,8,6,2,534,621,654,31,465,631,354,165,135,165,321,654,1321,351,32,136,51,351,351,56,13,21,651,65,1,65};
    int sum=0,req_num;

    printf("Enter number of which you want pairs: ");
    scanf("%d",&req_num);
    printf("The required pairs are: ");
    for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
        for(int j=i; j<sizeof(arr)/sizeof(arr[0]); j++){
            if(arr[i]+arr[j]==req_num){
                printf("(%d, %d),",arr[i],arr[j]);
            }
        }
    }

    return 0;
}