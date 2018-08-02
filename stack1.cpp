/*
stack --> array based implementation
Global variable int A[], int top
void push()
void pop()
void print()
int Top()
boolean isEmpty()
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101 //micro

int A[MAX_SIZE];
int top = -1;

void push(int x){

	if(top == MAX_SIZE -1){
		 printf("Error: stack overflow\n");
		 return;
	}
	A[++top] = x;
}

void pop(){
	if(top == -1){
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

void print(){
	int i;
	printf("Stack: ");
	for(i=0;i<=top;i++)
		printf("%d ", A[i]);
	printf("\n");
}

int Top(){
	return A[top];
}

bool isEmpty(){
	if(top == -1)
		return true;
	else
		return false;
}

int main(){
	push(2);print();
	push(3);print();
	pop();print();
	push(7);print();
	push(9);print();
	pop();print();
	push(33);print();
	printf("%s \n", isEmpty() ? "true":"false");
	pop();
	pop();
	printf("%s \n", isEmpty() ? "true":"false");
	pop();
	printf("%s \n", isEmpty() ? "true":"false");
	
}