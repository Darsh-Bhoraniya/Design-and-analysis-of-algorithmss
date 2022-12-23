#include<stdio.h>
#include<stdlib.h>

struct node{
	int data 
	struct node *next;
};

int main(){
	struct node *head,*middel, *last;
	struct node *temp=head;

	head = malloc(sizeof(struct node));
	middel = malloc(sizeof(struct node));
	last = malloc(sizeof(struct node));
	
	head->data = 10 ;
	middel->data = 20 ;
	last->data = 30 ;

	while(temp != null){
		printf("%d->",temp->data);
		temp = temp->next;
	}
	return 0;
}
