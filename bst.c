#include <stdio.h>
#include<stdlib.h>
struct node 
{
    int d;
    struct node *l;
    struct node *r;
};

struct node *newnode(int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->d = data;
    node->l = NULL;
    node->r = NULL;
    return node;
}

void insert(struct node *root, int data)
{
	struct node *temp;
	temp = root;
	if(temp == NULL)
	{
		temp = newnode(int data);
	}
	else
	{
		if(data > temp->d)
		{
			if(temp->r != NULL)
			{
				insert(temp->r,int data);
			}
			else
			{
				temp->r = newnode(int data);
			}
		}
		else
		{
			if(temp->l != NULL)
			{
				insert(temp->l,int data);
			}
			else
			{
				temp->l = newnode(int data);
			}


		}

	}
}

int main()
{
    printf("Hello World\n");
    struct node *root, *temp1 ,*temp2, *temp3;
    root = (struct node*)malloc(sizeof(struct node));
    //root->d =10;
    //root->r = NULL;
    //root->l = NULL;
    printf("%d\n",root->d);
    printf("%d\n",root->r);
    printf("%d\n",root->l);

    //temp1 = newnode(20);
    //root->r = temp1;
    //printf("temp1 %d\n",root->r->d);

    //temp2 = newnode(30);
    //root->r->r = temp2;
    //printf("temp2 %d\n",root->r->r->d);

    //temp3 = newnode(5);
    //root->l = temp3;
    //printf("temp3 %d",root->l->d);

    printf("==============================\n");

    root = insert(10);
    root = insert(root,20);
    
    struct node *temp;
    temp = root;
    while(temp->r != NULL)
    {
    	printf("%d\n",temp->d);
    	temp = temp->r;
    }
    printf("%d\n",temp->d);
    return 0;
}
