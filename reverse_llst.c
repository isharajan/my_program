#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *nxt;
};

struct node *head;
struct node *h1;
struct node *h2;
struct node *h3;
struct node *h4;

void display()
{
	struct node * current;
	current = head;
	while(current->nxt != NULL)
	{
		printf("%d-->",current->data);
		current = current->nxt;
	}

	printf("%d\n",current->data);

}

void reverse()
{
	struct node *curr, *prev, *next;
	prev = NULL;
	next = NULL;
	curr = head;

	while(curr!=NULL)
	{
		next = curr->nxt;
		curr->nxt = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	printf("\nReversed list\n");
	display();

}

void main()
{
	head = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));
	h4 = (struct node *)malloc(sizeof(struct node));

	
	

	head->data = 10;
	h1->data = 20;
	h2->data =30;
	h3->data =40;
	h4->data = 50;

	
	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = NULL;
	

	display();
	reverse();
	

}