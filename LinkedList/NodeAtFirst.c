

#include<stdio.h>
#include<stdlib.h>


struct Node{

	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addNode(int data){

	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode -> data = data;
	newNode -> next = NULL;

	if(head == NULL){

		head = newNode;
		tail = newNode;
	}else{

		tail -> next = newNode;
		tail = newNode;
	}
}

void display(){

	struct Node *current = head;

	if(head == NULL){

		printf("List is Empty \n");
	}else{

		while(current != NULL){

			printf("%d\n",current->data);
			current = current -> next;
		}
	}
}


void main(){
	
	addNode(10);
	addNode(20);
	addNode(30);
	addNode(40);

	display();

}
