#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr;
};
struct node *head;


void display()
{
	struct node *temp;
	temp = head;
	while(temp->ptr != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->ptr;
	}
	printf("%d ",temp->data);
	printf("\n");
}

void insertfront()
{
	int data;
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&data);
	temp->data = data;
	temp->ptr = NULL;
	if(head == NULL)
	{
		head = temp;

	}
	else
	{
		temp->ptr= head;
		head = temp;

	}
}


int insertlast()
{
	int data;
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&data);
	temp->data = data;
	temp->ptr = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct node *current;
		current = head;
		while(current->ptr != NULL)
		{
			current = current->ptr;
		}
		current->ptr = temp;
	}

}


void deletefront()
{
	struct node *temp;
	temp = head;
	head = temp->ptr;
	temp ->ptr= NULL;
	free(temp);
}


void deletelast()
{
	struct node *temp;
	temp = head;
	while(temp->ptr->ptr!= NULL)
	{
		temp = temp->ptr;
		
	}
	temp->ptr=NULL;
}




void main()
{
	head = NULL;
	//insertfront();
	insertlast();
	insertlast();
	insertlast();
	insertlast();
	insertfront();
	insertfront();
	insertfront();
	insertfront();
	display();
	deletefront();
	display();
	deletelast();
	display();
	//deletelast();



}