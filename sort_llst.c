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
	
	
void sort()
{
    struct node *min;
    struct node *current;
    min = head;
    current = min->nxt;
    while(min->nxt != NULL)
    {
        current = min->nxt;
        while(current->nxt != NULL)
        {
            if(current->data >= min->data)
            {
                current = current->nxt;
            }
            else
            {
                struct node *temp;
                temp = (struct node *)malloc(sizeof(struct node));
                temp->data =min ->data;
                min->data = current->data;
                current->data = temp->data;
            }
        }
        if(current->nxt == NULL)
        {
            if(current->data < min->data)
            {
                struct node *temp;
                temp = (struct node *)malloc(sizeof(struct node));
                temp->data =min ->data;
                min->data = current->data;
                current->data = temp->data;
            }
        }
        min = min->nxt;
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
	

	


	head->data = 30;
	h1->data = 20;
	h2->data =30;
	h3->data = 0;
	h4->data = 100;
	h5->data =-1;
	
	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = h5;
	h5->nxt = NULL;
	

	display();
	
    sort();
    printf("Sorted list \n");
    display();
	
	
}	