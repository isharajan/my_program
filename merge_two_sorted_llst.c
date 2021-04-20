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

struct node *merge(struct node *c1, struct node *c2)
{
	c1 = head1;
	c2 = head2;
	struct node *s, *head3;
	if(c1!=NULL && c2!= NULL)
	{
		if(c1->data <= c2->data)
		{
			s = c1;
			c1 = s->nxt;
		}
		else
		{
			s = c2;
			c2 = s->nxt;
		}
	}
	head3 = s;

	while(c1!=NULL && c2!=NULL)
	{
		if(c1->data <= c2->data)
		{
			s->nxt = c1;
			s = c1;
			c1 = s->nxt;
		}
		else
		{
			s->nxt = c2;
			s = c2;
			c2 = s->nxt;
		}
	}
	if(c1 == NULL)
	{	
		s->nxt = c2;
	}
	if(c2 == NULL)
	{
		s->nxt = c1;
	}

	return head3;
}




void main()
{   struct node *result;
   
	head1 = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));
	h4 = (struct node *)malloc(sizeof(struct node));
	//h5 = (struct node *)malloc(sizeof(struct node));

	head2 = (struct node *)malloc(sizeof(struct node));
	nd1 = (struct node *)malloc(sizeof(struct node));
	nd2 = (struct node *)malloc(sizeof(struct node));
	nd3 = (struct node *)malloc(sizeof(struct node));
	nd4 = (struct node *)malloc(sizeof(struct node));
	//nd5 = (struct node *)malloc(sizeof(struct node));
	

	head1->data = 100;
	h1->data = 300;
	h2->data = 500;
	h3->data = 700;
	h4->data = 900;
	//h5->data = 

	head2->data = 250;
	nd1->data = 400;
	nd2->data = 500;
	nd3->data = 760;
	nd4->data = 1000;
	//nd5->data = 9;

	head1->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = NULL;
	//h5->nxt = NULL;

	head2->nxt = nd1;
	nd1->nxt = nd2;
	nd2->nxt = nd3;
	nd3->nxt = nd4;
	nd4->nxt = NULL;
	//nd5->nxt = NULL;
	

	display(head1);
	display(head2);
	
	
	//merge(head1,head2);

	result = merge(head1,head2);
    printf("\nMerge two sorted linked lists\n");
	//display(merge(head1,head2));
	display(result);

	

}
