#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int data;
	struct node *nxt;
};
struct node *head;


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

struct node *create_newnode(int d)
{
	struct node *temp;
		
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = d;
	temp->nxt = NULL;
	return temp;

}

void stack_push(struct node *newnode)
{
	if(head == NULL)
	{
		head = newnode;
	}

	else
	{
		struct node * current;
		current = head;
		while(current->nxt != NULL)
		{
			current = current->nxt;
		}
		current->nxt = newnode;
	}
	//display();

}


	
int has_cycle()
{	
	struct node *fast, *slow;
	fast = head;
	slow = head;
	slow = slow->nxt;
	fast = fast->nxt->nxt;
	while(slow!= fast && slow->nxt != NULL && fast->nxt!= NULL)
	{
		
		slow = slow->nxt;
		fast = fast->nxt->nxt;
	}
	if(slow == fast )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	
	int n,d,str_size,res;
	//char str[50];
	head = NULL;
	printf("ente no.of nodes :");
	scanf("%d",&n);




	
	//fgets(str,50,stdin);
	//str_size = strlen(str);
	//sprintf("str_size = %d\n",str_size );
	for(int i=0; i<n; i++)
	{
		//printf("%c ",str[i]);
		printf("enter the data: ");
		scanf("%d",&d);
		stack_push(create_newnode(d));
	}


	display();

	res = has_cycle();

	
	if(res == 1)
	{
		printf("it is cycle\n");
	}
	else
	{
		printf("NOt cycles\n" );
	}
	
}