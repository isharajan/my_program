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

struct node *insert(struct node *root, int data)
{
	struct node *temp;
	temp = root;
	if(temp == NULL)
	{
		temp = newnode(data);
        return temp;
	}
	else
	{
		if(data > temp->d)
		{
			if(temp->r != NULL)
			{
				insert(temp->r,data);
			}
			else
			{
				temp->r = newnode(data);
			}
		}
		else
		{
			if(temp->l != NULL)
			{
				insert(temp->l,data);
			}
			else
			{
				temp->l = newnode(data);
			}


		}
        return temp;

	}
}


struct node *findmin(struct node *node)
{   struct node * current = node;
    while(current->l != NULL)
    {
        current = current->l;

    }  
    return current; 
}

void intraversal(struct node *root) {
    if(root == NULL)
        return;
    intraversal(root->l);
    printf("%d-->",root->d);
    intraversal(root->r);
}

void pretraversal(struct node *root) {
    if(root == NULL)
        return;
    printf("%d-->",root->d);
    pretraversal(root->l);
    pretraversal(root->r);
}

void posttraversal(struct node *root) {
    if(root == NULL)
        return;
    posttraversal(root->l);
    posttraversal(root->r);
    printf("%d-->",root->d);
}

struct node * delete(struct node *root, int key)
{
    if(root == NULL)
    {
        return root;
    }
    else if (key > root->d)
    {
        root->r = delete(root->r,key);
    }
    else if(key < root->d)
    {
        root->l = delete(root->l,key);
    }
    else
    {
        if(root->l == NULL && root->r == NULL)
        {
            free(root);
            //return root;
        }
        else if(root->l == NULL)
        {
            root = root->r;
            return root;
        }
        else if (root->r == NULL)
        {
            root = root->l;
            return root;
        }
        else
        {
            struct node *temp;
            temp = findmin(root->r);
            root->d = temp->d;
            root->r = delete(root->r,temp->d);
            return root;
        }
    }
}


void main()
{
    printf("Hello World\n");
    struct node *root, *temp1 ,*temp2, *temp3;
    root = NULL;
    root = (struct node*)malloc(sizeof(struct node));

    
    root = newnode(10);
    root =insert(root,20);
    root =insert(root,30);
    root =insert(root,5);
    root =insert(root,2);
    root =insert(root,6);
    root =insert(root,15);
    root =insert(root,1);
    
    
    struct node *temp;
    temp = root;
    while(temp->r != NULL)
    {
    	printf("%d-->",temp->d);
    	temp = temp->r;
    }
    printf("%d-->\n",temp->d);
    printf("==============================\n");
    


   printf("\ninorder traversal\n");
   intraversal(root);
   printf("\npreorder traversal\n");
   pretraversal(root);
   printf("\npostorder traversal\n");
   posttraversal(root);
   printf("\n\n");


   printf("after deleting node 20\n");
   root = delete(root,20);
   intraversal(root);


   printf("\nafter deleting node 2\n");
   root = delete(root,2);
   intraversal(root);
   

   printf("\nafter deleting node 15\n");
   root = delete(root, 15);
   intraversal(root);
   printf("\n");
   
   
}
