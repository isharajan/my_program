//check if a singly linked list is palindrome

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
		printf("%c-->",current->data);
		current = current->nxt;
	}

	printf("%c\n",current->data);

}

struct node *create_newnode(char d)
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


struct node *stack_pop()
{
	if(head == NULL)
	{
		printf(" Stack id empty...");
	}
	else
	{
		struct node * current,*prev;
		current = head;
		while(current->nxt != NULL)
		{	
			prev = current;
			current = current->nxt;
		}
		prev->nxt = NULL;
		//
		//free(current);

		//printf("pop....%c\n",current->data);
		return current;

	}

}

int palindrome()
{	struct node *pop, *mov;
	mov = head;
	while(mov->nxt != NULL)
	{
		pop = stack_pop();
		if(mov->data == pop->data)
		{
			free(pop);
			if(mov->nxt != NULL)
			{
				mov = mov->nxt;
			}
		}
		else
		{
			return 0;
		}
	}

	if(mov->nxt == NULL)
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
	char str[50];
	head = NULL;
	


	printf("enter the string : ");
	fgets(str,50,stdin);
	str_size = strlen(str);
	//printf("str_size = %d\n",str_size );
	for(int i=0; i<str_size-1; i++)
	{
		//printf("%c ",str[i]);
		stack_push(create_newnode(str[i]));
	}
	display();



	res = palindrome();
	if(res == 1)
	{
		printf("it is Palindrome\n");
	}
	else
	{
		printf("NOt palindrome\n" );
	}
	
}