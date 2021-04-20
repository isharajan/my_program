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
	
	
//method 1 :  with creating new node temp
/*void rotate(int n)
{   
    struct node *current;
    struct node *flw;
    printf("Total.no.of. rotation = %d\n\n",n);
    for (int i=1; i<=n; i++)
    {   
        current = head;
        while(current->nxt != NULL)
        {
            flw = current;
            current = current->nxt;
        }
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = current->data;
        temp->nxt = head;
        head = temp;
        flw->nxt = NULL;
        printf("rotation = %d\n",i);
        display();
        printf("\n");
        
    }
}
*/


//method 2: without creating newnode temp

void rotate(int n)
{   struct node *current;
    struct node *lastnode;
    struct node *flw;
    printf("total. no.of rotation : %d\n\n",n);
    for (int i=1; i<=n; i++)
    {
        current = head;
        while(current->nxt != NULL)
        {
            flw = current;
            current = current->nxt;
        }
        lastnode = current;
        lastnode->nxt = head;
        head = lastnode;
        flw->nxt= NULL;
        printf("rotation = %d\n",i);
        display();
        printf("\n");
        
    }

}
    

void main()
{
    int n = 3;
	head = (struct node *)malloc(sizeof(struct node));
	h1 = (struct node *)malloc(sizeof(struct node));
	h2 = (struct node *)malloc(sizeof(struct node));
	h3 = (struct node *)malloc(sizeof(struct node));
	h4 = (struct node *)malloc(sizeof(struct node));
	h5 = (struct node *)malloc(sizeof(struct node));
	

	
	

	head->data = 30;
	h1->data = 20;
	h2->data =30;
	h3->data = 60;
	h4->data = 100;
	h5->data =-1;
	
	head->nxt = h1;
	h1->nxt = h2;
	h2->nxt = h3;
	h3->nxt = h4;
	h4->nxt = h5;
	h5->nxt = NULL;
	

	display();
	
    rotate(n);
    printf("output of final rotation\n");
    display();
	
	
}	