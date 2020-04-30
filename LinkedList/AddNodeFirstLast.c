#include <stdlib.h>
#include<stdio.h>


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

void addLast(int data){

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
		printf("List is Empty\n");
	}else{

		while(current != NULL){

			printf("%d -> ",current -> data);
			current = current -> next;
		}
	}
}


int main(){

	addFirst(10);
	display();
	printf("\n");
	addLast(20);
	display();
	printf("\n");
	addFirst(30);
	display();
	printf("\n");
	addLast(40);
	display();
	printf("\n");
	addFirst(50);
	display();
	
	printf("\n");


	return 0;
}

/**
 *
 * ravi@ravi-HP-Notebook:~/Documents/DataStructure/CData Structure/LinkedList$ vim AddNodeFirstLast.c
ravi@ravi-HP-Notebook:~/Documents/DataStructure/CData Structure/LinkedList$ gcc AddNodeFirstLast.c
ravi@ravi-HP-Notebook:~/Documents/DataStructure/CData Structure/LinkedList$ ./a.out
10 ->
10 -> 20 ->
30 -> 10 -> 20 ->
30 -> 10 -> 20 -> 40 ->
50 -> 30 -> 10 -> 20 -> 40 ->
ravi@ravi-HP-Notebook:~/Documents/DataStructure/CData Structure/LinkedList$

*/
