#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *start,*ptr;

struct node *create_node(int data){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->next=NULL;
	return p;
}

void insert_node(struct node *n){
	struct node *p;
	if(start == NULL){
		start = n;
	}
	else{
		p = start;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = n;
		n->next= NULL;
	}
}

void traverse(){
	struct node *p;
	if(start == NULL){
		printf("Empty List");
	}
	else{
		p = start;
		printf("start->");
		while(p != NULL){
			printf("%d->",p->data);
			p = p->next;
		}
	}
	printf("NULL");
}

int main()
{
	start = NULL;
	int data,size,i;
	printf("Singly Linked List Program\n");
	printf("Enter number of nodes:\t");
	scanf("%d",&size);
	printf("\nEnter data for each node\n");
	for(i=0;i<=size-1;i++){
		printf("Enter data for node %d:",i+1);
		scanf("%d",&data);
		ptr = create_node(data);
		if(ptr == NULL){
			printf("\nOverFlow");
		}
		else{
			insert_node(ptr);
		}
	}
	
	printf("\nTraversal looks this way:\n");
	traverse();
	
	return 0;
}
