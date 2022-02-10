#include <stdio.h>
#include<stdlib.h>

//node structure
struct node{
	int data;
	struct node *prev;
	struct node *next;
};	

struct node *head;

// function prototype
void insert_beginning();
void insert_middle();
void insert_end();
void delete_beginning();
void delete_middle();
void delete_end();
void traversing_from_beginning();
void traversing_from_end();
void search_from_beginning();
void search_from_end();
void cases();
void menu();


//insertion at the beginning
void insert_beginning(){
	struct node *ptr;
	int data;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("Overflow\n");
		return;
	}
	else{
		printf("Enter data you want to insert: ");
		scanf("%d",&data);
		ptr -> data = data;
		ptr -> prev = NULL;
		ptr -> next = head;
		head = ptr;
		printf("%d inserted successfully at beginning\n",ptr -> data);
		return;
	}
}


//insertion at the middle
void insert_middle(){
	struct node *ptr,*cpt;
	int data,pos;
	cpt = head;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("Overflow\n");
		return;
	}
	else{
		if(head -> next == NULL){
			insert_end();
			return;
		}
		else{
			printf("Enter data you want to insert: ");
			scanf("%d",&data);
			printf("Enter where you want to insert: ");
			scanf("%d", &pos);
			while(cpt !=NULL){
				if(cpt -> data == pos){
					ptr -> data = data;
					ptr -> prev =  cpt;
					ptr -> next = cpt -> next;
					cpt -> next = ptr;
					printf("%d inserted successfully after %d\n",ptr -> data, pos);
					return;
				}
				else{
					cpt = cpt -> next;
				}
			}	
		}	
	}
}


//insertion at last
void insert_end(){
	struct node *ptr,*cpt;
	int data;
	cpt = head;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("Overflow\n");
		return;
	}
	else{
		printf("Enter data you want to insert: ");
		scanf("%d",&data);
		while(cpt -> next != NULL){
			cpt = cpt -> next;
		}
		ptr -> data = data;
		ptr -> prev = cpt;
		ptr -> next = NULL;
		cpt -> next = ptr;
		printf("%d inserted successfully at end\n",ptr -> data);
		return;
	}
}



//deletion at beginning
void delete_beginning(){
	struct node *ptr;
	ptr = head;
	if (ptr == NULL){
		printf("Underflow\n");
		return;
	}
	else if(head -> next == NULL){
		printf("%d deleted successfully\n", head -> data);
		free(head);
		return;
	}
	else{
		head = ptr -> next;
		head -> prev = NULL;
		printf("%d deleted successfully\n", ptr -> data);
		free(ptr);
	}
}


//deletion at the middle
void delete_middle(){
	struct node *ptr;
	int del;
	ptr = head;
	if (ptr == NULL){
		printf("Underflow\n");
		return;
	}
	else if(head -> next == NULL){
		printf("%d deleted successfully\n", head -> data);
		free(head);
		return;
	}
	else{
		printf("Enter element you want to delete: ");
		scanf("%d", &del);
		while(ptr -> data != del){
			ptr = ptr -> next;
		}
		ptr -> prev -> next = ptr -> next;
		ptr -> next -> prev =  ptr -> prev;
		printf("%d deleted successfully\n", ptr -> data);
		free(ptr);
	}
}


//deletion at last
void delete_end(){
	struct node *ptr;
	int del;
	ptr = head;
	if (ptr == NULL){
		printf("Underflow\n");
		return;
	}
	else if(head -> next == NULL){
		printf("%d deleted successfully\n", head -> data);
		free(head);
		return;
	}
	else{
		while(ptr -> next != NULL){
			ptr = ptr -> next;
		}
		ptr -> prev -> next = NULL;
		printf("%d deleted successfully\n", ptr -> data);
		free(ptr);
	}
}


//traversing from beginning
void traversing_from_beginning(){
	struct node *ptr;
	if(head ==NULL){
		printf("Underflow\n");
		return;	
	}
	ptr = head;
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


//traversing from last
void traversing_from_end(){
	struct node *ptr;
	if(head == NULL){
		printf("Underflow\n");
		return;	
	}
	ptr = head;
	while(ptr -> next != NULL){
		ptr = ptr -> next;
	}
	int count = 1;
	while(1){
		if(ptr -> prev == NULL){
			printf("node %d  Data -> %d \n", count, ptr -> data);
			break;
		}
		else{
			printf("node %d  Data -> %d \n", count, ptr -> data);
		}
		ptr = ptr -> prev;
		count++;
	}
}


// searching from beginning
void search_from_beginning(){
	struct node *ptr;
	int data, count=1;
	ptr = head;
	if (ptr == NULL){
		printf("Underflow\n");
		return;
	}
	printf("Enter data you want to search: ");
	scanf("%d", &data);
	while(ptr -> data != data){
		count++;
		ptr = ptr -> next;
	}
	printf("%d is at position %d\n", ptr -> data, count);
}


// searching from last
void search_from_end(){
	struct node *ptr;
	int data, count=1;
	ptr = head;
	if (ptr == NULL){
		printf("Underflow\n");
		return;
	}
	while(ptr -> next != NULL){
		ptr = ptr -> next;
	}
	printf("Enter data you want to search: ");
	scanf("%d", &data);
	while(ptr -> data != data){
		count++;
		ptr = ptr -> prev;
	}
	printf("%d is at position %d", ptr -> data, count);
}


// cases
void cases(){
	int choice;
	printf("\nEnter choice form menu\n");
	do{
		scanf("%d", &choice);
		if(choice<1 || choice >11){
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
				traversing_from_beginning();
				printf("Next choice\n");
				break;
			}
			case 8:{
				traversing_from_end();
				printf("Next choice\n");
				break;
			}
			case 9:{
				search_from_beginning();
				printf("Next choice\n");
				break;
			}
			case 10:{
				search_from_end();
				printf("Next choice\n");
				break;
			}
		}
	}while(choice!=11);	
}


// menu
void menu(){
	printf("\t====================================\n");
	printf("\t\tDoubly Linked list operation\n\n");
	printf("\t====================================\n");
	printf("\t1: Insert at beginning\n\t2: Insert at a specific position\n\t3: Insert at end \n\t4: Delete at beginning\n\t5: Delete at middle\n\t6: Delete at end\n\t7: Traverse from beginning\n\t8: Traverse from end\n\t9: Search from beginning\n\t10: Search from End\n\t11:Exit");
	return;
}

//main
int main(){
	menu();
	cases();

	return 0;
}
