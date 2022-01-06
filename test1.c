#include<stdio.h>
int arr[100]={1,2,3,4,5,6,7,8,9}, max_len=15,tracker=9;

void insert(int pos, int item){
    if (tracker==max_len)
    {
        printf("Overflow!!!!!!!!!!!!!\n");
    }
    else
    {
        for (int i = tracker-1; i >= pos-1; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[--pos]=item;
        tracker++;
    }
    
}


int main(){
    int item,pos;
    printf("Enter element to insert:\n");
    scanf("%d",&item);

    printf("Enter position to be inserted:\n");
    scanf("%d",&pos);
    printf("ARRAY: ");
    for(int i=0;i<tracker;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    if (tracker+1<pos)
    {
        printf("Invalid Input!!! Please insert correct position: 1-%d",tracker);
    }
    else
    {
        insert(pos ,item);
        printf("%d inserted successfully at position %d\n",item,pos);
        printf("NEW array is:\n");
        for(int i=0;i<tracker;i++){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}