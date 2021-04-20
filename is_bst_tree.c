#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

//struct node *root;

struct node *newnode(int value)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;
	return temp;


}

struct node *insert(struct node *root, int value)
{	struct node *temp;
	temp = root;
	if(temp == NULL)
	{
		temp = newnode(value);
		return temp;
		
	}
	else 
	{
		if(value < temp->data)
		{
			
			if(temp->left == NULL)
			{
				
				temp->left = newnode(value);
				return temp;
			}
			else
			{
				insert(temp->left,value);
				
			}
		}
		
	
		else
		{
			if(temp->right == NULL)
			{
				
				temp->right = newnode(value);
				return temp;
			}
			else
			{
				
				insert(temp->right,value);
			}
		}

	}
	return temp;
}

struct node *findmin(struct node *root)
{
	if(root->left != NULL)
	{
		findmin(root->left);
	}
	return root;
}
struct node *delete(struct node *root,int value)
{
	//struct node *temp;
	if (root == NULL)
        return root;
    if (value < root->data)
        root->left = delete(root->left, value);
    else if (value > root->data)
        root->right = delete(root->right, value);

    else {

        
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        
        struct node* temp = findmin(root->right);
 
        
        root->data = temp->data;
 
        
        root->right = delete(root->right, temp->data);
    }
    return root;
}



void intraversal(struct node *root) {
	
	struct node *temp = NULL;
    if(root == NULL)
        return;
    intraversal(root->left);
     printf("%d-->",root->data);
  
    intraversal(root->right);

}

void main()
{
	
	int value,i;
	struct node *root;
	root = NULL;
	root = (struct node *)malloc(sizeof(struct node));
	//printf("enter the value:");
	//scanf("%d",&value);
	root = newnode(10);
	//printf("%d====rooot",root->data);
	root = insert(root,20);
	root = insert(root,10000);
	root = insert(root,30);
	root = insert(root,40);
	root = insert(root,50);
	root = insert(root,70);
	intraversal(root);
	printf("\n");

	//delete(root,50);
	//intraversal(root);
	printf("\n");

}
