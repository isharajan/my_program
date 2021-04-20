#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *nxt;
};

struct node *head1;
struct node *h1;
struct node *h2;
struct node *h3;
struct node *h4;
struct node *h5;

struct node *head2;
struct node *nd1;
struct node *nd2;
struct node *nd3;
struct node *nd4;
struct node *nd5;

void display(struct node *hd)
{
	struct node * current;
	current = hd;
	while(current->nxt != NULL)
	{
		printf("%d-->",current->data);
		current = current->nxt;
	}

	printf("%d\n",current->data);

}





void main()
{   
   
	head1 = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));
	h4 = (struct node *)malloc(sizeof(struct node));
	h5 = (struct node *)malloc(sizeof(struct node));

	head2 = (struct node *)malloc(sizeof(struct node));
	nd1 = (struct node *)malloc(sizeof(struct node));
	nd2 = (struct node *)malloc(sizeof(struct node));
	nd3 = (struct node *)malloc(sizeof(struct node));
	//nd4 = (struct node *)malloc(sizeof(struct node));
	//nd5 = (struct node *)malloc(sizeof(struct node));
	

	head1->data = 1;
	h1->data = 2;
	h2->data = 3;
	h3->data = 4;
	h4->data = 5;
	h5->data = 6;

	head2->data = 10;
	nd1->data = 20;
	nd2->data = 30;
	nd3->data = 4;
	//nd4->data = 8;
	//nd5->data = 9;

	head1->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = h5;
	h5->nxt = NULL;

	head2->nxt = nd1;
	nd1->nxt = nd2;
	nd2->nxt = nd3;
	nd3->nxt = NULL;
	//nd4->nxt = NULL;
	//nd5->nxt = NULL;
	

	display(head1);
	display(head2);

	struct node * current1;
	struct node * current2;

	current1 = head1;
	current2 = head2;

	while(current1->nxt != NULL)
	{
		if(current1->data == current2->data)
		{	
			printf("%d==%d\n",current1->data,current2->data);
			printf("intersect point or NODE = %d\n",current1->data);
			break;
		}
		else
		{
			current1 = current1->nxt;
			current2 = current2->nxt;	
		}
			
	}

	current2->nxt =  current1->nxt;
	display(head2);

	
}
