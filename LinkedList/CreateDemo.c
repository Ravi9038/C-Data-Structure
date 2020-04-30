

#include<stdio.h>
#include<stdlib.h>
struct Node{

	int data;
	struct Node *next;
};

void display(struct Node *n){

	while(n != NULL){

		printf("%d\n", n->data);
		n = n -> next;
	}
}

int main(){

	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head -> data = 10;

	head -> next = second;

	second -> data = 20;

	second -> next = third;

	third -> data = 30;

	display(head);

	return 0;

	


}