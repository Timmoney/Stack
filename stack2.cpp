/*
stack --> Linked List Implementation
void push(int x)
void pop()
int Top()
bool isEmpty()
print()
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* next;
};

Node* head;

//always add at head
void push(int x){
	Node* newNode = new Node();
	//struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
	newNode -> data = x;
	newNode -> next = NULL;
    
    newNode -> next = head;
    head = newNode; 
}

void pop(){
	Node* q;
	//handle the empty list
	if(head == NULL) return;
	q = head -> next;
	head -> data = NULL;
	head -> next = NULL;
	head = q;
}

int Top(){
	return head->data;
}

bool isEmpty(){
	if(head!=NULL)
		return false;
	else
		return true;
}

void print(){
	Node* p = head;

	if(p==NULL)
		printf("There is nothing in the list.\n");
	printf("Stack: ");
	while(p!=NULL){
		printf("%d ", p->data);
		p=p->next;
	}
	printf("\n");
}

int main(){
	push(2);print();
	push(45);print();
	pop();print();
	printf("%d\n", Top());
	push(287);print();
	push(1);print();
	printf("%d\n", Top());
	pop();print();
	push(6);print();
	printf("%s\n", isEmpty()?"true":"false");
	pop();
	pop();
	printf("%s\n", isEmpty()?"true":"false");
	pop();
	printf("%s\n", isEmpty()?"true":"false");
}