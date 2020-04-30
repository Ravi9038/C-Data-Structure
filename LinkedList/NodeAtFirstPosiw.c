

#include<stdio.h>
#include<stdlib.h>


struct Node{

	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addAtFirstPosi(int data){

	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));

	newNode -> data = data;
	newNode -> next = NULL;

	if(head == NULL){

		head = newNode;
		tail = newNode;
	}else{

		struct Node *temp = head;
		head = newNode;
		head -> next = temp;
	}
}

void addAtLastPosi(int data){

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

		printf("List is Empty");
	}else{

		while(current != NULL){

			printf("%d\n",current->data);
			current = current -> next;
		}
	}
}



void main(){

	addAtFirstPosi(10);
	addAtFirstPosi(20);
	addAtFirstPosi(30);
	addAtFirstPosi(40);
	addAtLastPosi(60);

	display();
}
