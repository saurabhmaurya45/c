#include <stdio.h>

void insert(int arr[],int pos, int item,int lb,int ub,int n){
    if(n==ub){
        printf("overflow"); 
        return;
    }
    for (int k=ub;k>pos;k--){
        arr[k]=arr[k-1];
    }
    arr[pos]=item;
    ub++;
    n++;
    return;
}

int main(){
    int arr[10]={10,20,30,40,50},item, pos, lb=0,ub=5;
    int n=10;
    for (int i=lb;i<ub;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nEnter item to insert\n");
    scanf("%d",&item);
    printf("Enter position\n");
    scanf("%d",&pos);
    insert(arr,pos,item,lb,ub,n);
    for (int i=lb;i<ub+1;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}