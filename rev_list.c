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
struct node *h5;

void main()
{
	head = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));


	
	

	head->data = 5;
	h1->data = 10;
	h2->data =15;
	h3->data = 20;

	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = NULL;


	
 


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

	display();

	struct node *h, *temp;
	h = head;
	while(h->nxt != NULL)

	{
		temp = h->nxt;
		h->nxt = temp->nxt;
		temp->nxt = h;
		head = temp;
		printf("head = %d\n",temp->data);
		display();

	}
	printf("head = %d\n",temp->data);

	display();

	

}