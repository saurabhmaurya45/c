#include<stdio.h>
#include<stdlib.h>
//#define max_size 100

// constructing a stack with its top size and a stack named array
struct stack
{
	int topOfStack;
	int stack_size;
	int *stack;
};
void constructstack(stack s,int n){
	s->stack_size=n;
	s->stack=(int*)(malloc(sizeof(int)*s->));
}
// initilising stack to -1
void makeEmpty(stack s){
	s->topOfStack=-1;
}

void isEmpty()


//__main__
int main(){
	int choice,n;
	struct stack *s;
	printf("Enter size of stack you want to construct\n");
	scanf("%d",&n);
	//constructing stack
	constructstack(s,n)
	//initialising stack_top to -1
	s->topOfStack=-1;
	//fixing stack size
	s->stack_size=n;
	//alloating memory to the stack array
	s->stack=(int*)(malloc(sizeof(int)*max_size));
	printf("\t\t\tARRAY implementation of Stack\n");
	printf("\t\t\t==============================\n");

	do{
		printf("\t\t1: PUSH\t 2: POP\t3: TOP\t4: TOPANDPOP\t5: DISPLAY\t6: QUIT\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			{
				if (isFull(s))
				{
					printf("Stack Overflow\n");
				}
				else
				{
					int item;
					printf("Enter object you want to insert:\n");
					scanf("%d",&item);
					PUSH(s,item);
					printf("%d inserted at position %d successfully\n",item,s->topOfStack);
                	printf("\n Press Next Choice");
				}
				break;
			}
			case 2:
			{
				if (isEmpty(s))
				{
					printf("Stack Underflow\n");
				}
				else
				{
					int popped_item;
					popped_item=POP(s);
					printf("Top item %d deleted successfully\n",popped_item);
                	printf("\n Press Next Choice");
				}
				break;
			}
			case 3:
			{
				if (isEmpty(s))
				{
					printf("Stack Underflow\n");
				}
				else
				{
					TOP(s);
				}
				break;
			}
			case 4:
			{
				if (isEmpty(s))
				{
					printf("Stack Underflow\n");
				}
				else
				{
					printf("Topmost object in the Stack is %d\n",TOP(s) );
				}
				break;
			}
			case 5:
			{
				if (isEmpty(s))
				{
					printf("Stack is empty! No object to show\n");
				}
				else
				{
					DISPLAY(s);
				}
				break;	
			}
			default:
			{
				printf("Invalid Choice\n Please enter correct choice(1/2/3/4/5/6)\n");
			}
		}
	}while(choice!=6)
	DisposeStack();
	return 0;
}