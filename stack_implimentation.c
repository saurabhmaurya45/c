#include<stdio.h>

int stack[100],max_size,TOP=-1,choice;

int stackEmpty(void);
int stackFull(void);
void PUSH(int item);
int POP(void);
void Display(void);

int stackFull(void){
	if (TOP=max_size){
		return 1;
	}
	else{
		return 0;
	}
}
int stackEmpty(void){
	if (TOP==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
void PUSH(int item){
	TOP++;
	stack[TOP]=item;
	return;
}
int POP(void){
	static int top_item;
	top_item=stack[TOP];
	TOP--;
	return top_item;
}
void Display(void){
	for(int i=TOP; i>=0; i--){
		printf("\n%d",stack[i]);
    }
    return;
}

int main(){
	int n;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    max_size=n;
    printf("%d\n",max_size );
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                if(stackFull()==1)
                {
                	printf("Stack Overflow\n");
                }
                else{
                	int item;
                	printf("Enter item to insert: ");
                	scanf("%d",&item);
                	PUSH(item);
                	printf("%d inserted at position %d successfully\n",item,TOP);
                	printf("\n Press Next Choice");
                }
                break;
            }
            case 2:
            {
                if (stackEmpty()==1)
                {
                	printf("Stack underflow");
                }
                else
                {
                	int pop=POP();
                	printf("Top item %d deleted successfully\n",pop);
                	printf("\n Press Next Choice");
                }
                break;
            }
            case 3:
            {
                if (stackEmpty()==1)
                {
                	printf("Stack Empty\n");
                }
                else{
                	printf("\n The elements in STACK \n");
                	Display();
			        printf("\n Press Next Choice");
                }
                break;
            }
            case 4:
            {
                printf("\n\t EXITING!!! ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}