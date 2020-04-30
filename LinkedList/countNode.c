

#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void insertNode(int data){

	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

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

void insertAtLast(int data){

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

int display(){

	struct Node *current = head;
	int count = 0;

	if(head == NULL){

		printf("List is Empty\n");
	}else{

		while(current != NULL){

			count++;
			printf("%d\n",current -> data);
			current = current -> next;
		}
	}

	return count;
}

void main(){

	insertNode(10);
	insertNode(20);
	insertNode(30);
	insertNode(40);
	insertAtLast(50);

	int temp = display();

	printf("Count of Node = %d\n",temp);
}
