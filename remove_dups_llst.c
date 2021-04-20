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


void remove_dups()
{
	struct node *current;
	current = head;
	struct node *temp;
	struct node *flw;
	while(current->nxt != NULL)
	{	//printf("current->data= %d\n",current->data);	
		temp = current->nxt;
		while(temp != NULL)
		{
			//printf("temp->data = %d\n",temp->data);
			if(temp->data != current->data)
			{	
				flw = temp; 
				temp = temp->nxt;
			}
			else
			{
				//printf("%d == %d\n",temp->data,current->data);
				if(temp->nxt != NULL)
				{	
					if(current->nxt == temp)
					{
						flw = current;
					}
					//printf("temp->nxt->data = %d\n",temp->nxt->data);
					flw->nxt = temp->nxt;
					temp = temp->nxt;
					//display();
				}
				else
				{	
					if(current->nxt == temp)
					{
						flw = current;
					}
					flw->nxt = NULL;
					free(temp);
					//display();
				}
				
			}
			
		}
		if(current->nxt != NULL)
		{	
			current = current->nxt;
		}
	
	}


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
	h1->data = 1;
	h2->data =10;
	h3->data = 2;
	h4->data = 2;
	h5->data =8;
	
	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = h5;
	h5->nxt = NULL;
	

	display();

	remove_dups();

	printf("after removing duplicates \n");
	display();


	
}