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
{   struct node *temp;
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


void intraversal(struct node *root) {
    if(root == NULL)
        return;
    
    intraversal(root->left);
    printf("%d-->",root->data);
    intraversal(root->right);
}

int max_val(int ls,int rs)
{
    if(ls>rs)
    {
        return ls;
    }
    else
    {
        return rs;
    }
}

int max_depth(struct node * root,int val)
{
    int ls,rs;
    if(root==NULL)
    {
        return val;
    }
    ls = max_depth(root->left,val+1);
    rs = max_depth(root->right, val+1);
    return max_val(ls,rs);
}
void main()
{
    
    int value;
    int val =0;
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

    root = insert(root,100);
    root = insert(root,25);
    root = insert(root,75);
    root = insert(root,95);
    root = insert(root,80);
    root = insert(root,-8);
    intraversal(root);
    printf("\n");

    printf(" max_depth is ...%d\n",max_depth(root,val));


}