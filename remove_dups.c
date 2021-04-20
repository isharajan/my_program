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




void main()
{
	head = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));
	h4 = (struct node *)malloc(sizeof(struct node));
	h5 = (struct node *)malloc(sizeof(struct node));
	

	
	

	head->data = 1;
	h1->data = 2;
	h2->data =3;
	h3->data = 4;
	h4->data = 5;
	h5->data =6;
	
	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = h5;
	h5->nxt = NULL;
	

	display();

	//delete(head);
		struct node *current;
		struct node *temp;
		head = current;
		temp = current->nxt;
		while(current->nxt != NULL)
		{	
			temp = current->nxt;
	
			//printf("current->data = %d\n",current->data);
			printf("temp ->data = %d\n",temp->data );
	
		}

	display();
	

}