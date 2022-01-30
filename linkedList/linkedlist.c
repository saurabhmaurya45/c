#include<stdio.h>
#include<stdlib.h>

//struct node
struct node{
	int data;
	struct node *next;
};
struct node *first;

//insertion at beginning
void insert_beginning(){
	struct node *ptr;
	ptr= (struct node*)malloc(sizeof(struct node));
	if (ptr==NULL)
	{
		printf("Overflow\n");
		return;
	}
	printf("Insert data for insertion at the first node: ");
	scanf("%d",&ptr -> data);
	ptr ->next = first;
	first = ptr;
	printf("%d inserted at the beginning successfully\n", ptr -> data);
}

//insertion at the end
void insert_end(){
	struct node *ptr,*cpt;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("Overflow\n");
		return;
	}
	printf("Insert data for insertion at the last node: ");
	scanf("%d", &ptr -> data);
	cpt = first;
	while(cpt -> next != NULL){
		cpt = cpt -> next;
	}
	cpt ->next = ptr;
	ptr -> next = NULL;
	printf("%d inserted successfully at the end\n", ptr -> data);
}

//insertion at the middle
void insert_middle(){
	struct node *ptr,*cpt;
	int data;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("Overflow\n");
		return;
	}
	printf("Insert data for the insertion at the middle\n");
	scanf("%d", &ptr -> data);
	printf("where you want to insert: ");
	scanf("%d",&data);
	cpt = first;
	while(cpt -> next -> data !=data){
		cpt = cpt -> next;
	}
	ptr -> next = cpt -> next;
	cpt -> next = ptr;
	printf("%d inserted successfully before %d\n", ptr -> data, data);
}

//deletion at the beginning
void delete_beginning(){
	struct node *ptr;
	if(first == NULL){
		printf("Underflow\n");
		return;
	}
	ptr = first;
	printf("%d deleted successfully\n", ptr -> data);
	first = first -> next;
	free(ptr);
}

//deletion from the middle
void delete_middle(){
	struct node *ptr,*cpt;
	int to_delete;
	if(first ==NULL){
		printf("Underflow\n");
		return;
	}
	cpt = first;
	printf("Data you want to delete: ");
	scanf("%d", &to_delete);
	while(cpt -> data != to_delete){
		ptr = cpt;
		cpt = cpt -> next; 
	}
	ptr -> next = cpt -> next;
	printf("%d deleted successfully\n", cpt -> data);
	free(cpt);
}

//deletion at the end
void delete_end(){
	struct node *ptr,*cpt;
	if(first == NULL){
		printf("Underflow\n");
		return;
	}
	cpt = first;
	while(cpt -> next !=NULL){
		ptr = cpt;
		cpt = cpt -> next;
	}
	ptr -> next = NULL;
	printf("%d deleted successfully\n", cpt -> data);
	free(cpt);
}

// traversing
void traversing(){
	struct node *ptr;
	if(first ==NULL){
		printf("Underflow\n");
		return;
	}
	ptr = first;
	int count = 1;
	while(1){
		if(ptr -> next == NULL){
			printf("node %d  Data -> %d \n", count, ptr -> data);
			break;
		}
		else{
			printf("node %d  Data -> %d \n", count, ptr -> data);
		}
		ptr = ptr -> next;
		count++;
	}
}

//searching
void search(){
	struct node *ptr;
	int element,count=1;
	printf("Enter element you want to search: ");
	scanf("%d", &element);
	ptr = first;
	while(ptr -> data != element){
		count++;
		ptr = ptr -> next;
	}
	printf("%d isat position %d\n", ptr -> data, count);
}

//menu
void menu(){
	printf("\t====================================\n");
	printf("\t\tLinked list operation\n\n");
	printf("\t====================================\n");
	printf("\t1: Insert at beginning\n\t2: Insert at a specific position\n\t3: Insert at end \n\t4: Delete at beginning\n\t5: Delete at middle\n\t6: Delete at end\n\t7: Traverse\n\t8: Search\n\t9:Exit");
	return;
}

//cases
void cases(){
	int choice;
	printf("\nEnter choice form menu\n");
	do{
		scanf("%d", &choice);
		if(choice<1 || choice >9){
			printf("Wrong choice!!  Try Again\n");
			continue;
		}
		switch(choice){
			case 1:{
				insert_beginning();
				printf("Next Choice\n");
				break;
			}
			case 2:{
				insert_middle();
				printf("Next choice\n");
				break;
			}
			case 3:{
				insert_end();
				printf("Next choice\n");
				break;
			}
			case 4:{
				delete_beginning();
				printf("Next choice\n");
				break;
			}
			case 5:{
				delete_middle();
				printf("Next choice\n");
				break;
			}
			case 6:{
				delete_end();
				printf("Next choice\n");
				break;
			}
			case 7:{
				traversing();
				printf("Next choice\n");
				break;
			}
			case 8:{
				search();
				printf("Next choice\n");
				break;
			}
		}
	}while(choice!=9);	
}

int main(){
	menu();
	cases();
	return 0;
}