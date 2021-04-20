///Revese a doubly linked list


#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *nxt;
};

struct node *head;
struct node *h1;
struct node *h2;
struct node *h3;

void display()
{
    struct node *current;
    struct node *lastnode;
    current = head;
    while(current->nxt != NULL)
    {
        printf("%d->",current->data);
        current = current->nxt;
    }
    printf("%d\n",current->data);
    
    printf("Reverse Order \n");
    //lastnode = current;
    while(current->prev != NULL)
    {
        printf("%d->",current->data);
        current= current->prev;
    }
    printf("%d\n",current->data);
}

void main()
{
    head = (struct node *)malloc(sizeof(struct node));
    h1 = (struct node *)malloc(sizeof(struct node));
    h2 = (struct node *)malloc(sizeof(struct node));
    h3 = (struct node *)malloc(sizeof(struct node));
    
    head ->data = 100;
    h1->data = 200;
    h2->data = 300;
    h3->data = 400;
    
    head->prev = NULL;
    head->nxt = h1;
    
    h1->prev = head;
    h1->nxt = h2;
    
    h2->prev = h1;
    h2->nxt = h3;
    
    h3->prev = h2;
    h3->nxt = NULL;
    
    display();
    
    
}