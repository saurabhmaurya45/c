

#include <stdio.h>

//ISEMPTY
int isEmpty(int *ptr_top){
	if (*ptr_top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//ISEFULL
int isFull(int *ptr_top, int max_size){
	if (*ptr_top==max_size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//PUSH
void PUSH(int *ptr_arr, int *ptr_top, int item){
		(*ptr_top)++;
		*(ptr_arr+(*ptr_top))=item;
}

//POP
void POP(int *ptr_arr, int *ptr_top, int *ptr_deleted_item){
	*ptr_deleted_item=*(ptr_arr+(*ptr_top));
	(*ptr_top)--;
}

//display
void DISPLAY(int *ptr_arr, int *ptr_top){
	printf("The top item in stack is %d\n",*(ptr_arr+(*ptr_top)) );
}

//__main__
int main(){
	int choice,max_size;
	int arr[100],top=-1;
	int *ptr_arr,*ptr_top;
	ptr_arr=arr;
	ptr_top=&top;
	printf("\t\tStack Implimentation\n");
	printf("Enter maximum size of the stack\n");
	scanf("%d",&max_size);
	printf("choice:\n");
	printf("\t1. PUSH\n\t2. POP\n\t3. DISPLAY \n\t4. EXIT\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);				
	while(choice!=4){
		if (choice==1 || choice==2 || choice==3 || choice==4)
		{
			switch (choice){
				case 1:
				{
					printf("Enter item to insert\n");
					int item;	
					scanf("%d",&item);
					if (isFull(ptr_top,max_size)==1)
					{
						printf("Error:-Stack overflow\n\tCannot Insert more data\n");
					}
					else
					{
						PUSH(ptr_arr,ptr_top,item);	
						printf("%d inserted successfully\n",item);
					}
					break;
				}
				case 2:
				{
					if (isEmpty(ptr_top)==1)
					{
						printf("Error:-Stack underflow\n\tCannot delete any more\n");
					}
					else
					{
						int deleted_item;
						int *ptr_deleted_item;
						ptr_deleted_item=&deleted_item;
						POP(ptr_arr, ptr_top, ptr_deleted_item);
						printf("TOP item %d deleted successfully\n", *ptr_deleted_item);
					}
					break;
				}
				case 3:
				{
					DISPLAY(ptr_arr,ptr_top);
					break;
				}
			}
		}
		else
		{
			printf("Invalid Choice! Please enter 1|2|3|4\n");
		}
		printf("Enter your choice\n");
		scanf("%d",&choice);
	}
	printf("Bye\n");
	return 0;
}