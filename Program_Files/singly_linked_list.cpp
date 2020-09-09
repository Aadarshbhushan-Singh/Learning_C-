#include <iostream>
#include <stdlib.h>
int length(struct node temp);
using namespace std;
struct node{
	int data;
	struct node *next;
} *head=NULL;

void insert(int newElement){
	struct node *temp;
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=newElement;
	newNode->next=NULL;
	if (head==NULL){
		head=newNode;
		temp=newNode;
	}else{
		temp->next=newNode;
		temp=newNode;
	};

};

void display(){
	struct node *traversalPointer;
	traversalPointer=head;
	while(traversalPointer!=NULL){
		cout<<traversalPointer->data<<" ";
		traversalPointer=traversalPointer->next;
	}
	cout<<endl;
};

void insertAtBegining(int firstElement){
	struct node *firstNode;
	firstNode=(struct node*)malloc(sizeof(struct node));
	firstNode->data=firstElement;
	firstNode->next=head;
	head=firstNode;
	cout<<endl<<"Linked List after inserting at begining: ";
	display();
};


int main(){
	insert(5);
	insert(9);
	insert(10);
	insert(12);
	cout<<"Linked list: ";
	display();
	insertAtBegining(45);
//	insertAtLast(56);
	insert(100);
	cout<<"\nLinked list: ";
	display();
	
	return 0;
}
