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


void remove_NthFromEnd(int pos_from_last)
{   int del_node;
    int count =0;
    struct node *current;
    current = head;
    while(current->nxt != NULL)
    {
        count = count +1;
        current = current->nxt;
    }
    count = count+1;
    //printf("No.of. nodes = %d\n",count);
    
    del_node = count - pos_from_last;
    //printf("del_node = %d\n",del_node);
    int i;
    struct node *cur1;
    cur1 = head;
    for(i=1; i<=del_node-1; i++)
    {
        cur1 = cur1->nxt;   
    }
    printf("Remove_ %dth node From End = %d\n",pos_from_last,cur1->nxt->data);
    cur1->nxt       = cur1->nxt->nxt;
}


void main()
{   
    int pos_from_last =3;
	head = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));
	h4 = (struct node *)malloc(sizeof(struct node));
	h5 = (struct node *)malloc(sizeof(struct node));
	

	
	

	head->data = 30;
	h1->data = 20;
	h2->data =30;
	h3->data = 40;
	h4->data = 100;
	h5->data =-1;
	
	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = h5;
	h5->nxt = NULL;
	

	display();
	printf("pos_from_last = %d\n",pos_from_last);
	remove_NthFromEnd(pos_from_last);
	display();
	
}