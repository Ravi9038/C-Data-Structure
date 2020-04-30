

#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addFirst(int data){

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

void deleteNodeFirst(){

	if(head == NULL){

		printf("List is Empty\n");
	}else{

		if(head != tail){

			head = head -> next;
		}else{

			head = tail = NULL;
		}
	}
	
}
void display(){

	struct Node *current = head;

	if(head == NULL){

		printf("List is Empty\n");
	}else{

		while(current != NULL){

			printf("%d\n",current -> data);
			current = current -> next;
		}
	}
}



void main(){

	addFirst(10);
	addFirst(20);
	addFirst(30);
	addFirst(40);
	addFirst(50);

	display();

	deleteNodeFirst();
	
	printf("Delete Node At First\n");
	display();

}
