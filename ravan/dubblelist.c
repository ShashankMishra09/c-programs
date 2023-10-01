#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *rlink;
    struct node *llink;
};
struct node *root = NULL;
void insert()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&temp->data);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(root==NULL)
    {
        root=temp;

    }
    else
    {
         struct node *p;
         p=root;
         while(p->rlink!=NULL)
         {
             p=p->rlink;
         }
         p->rlink=temp;
         temp->llink=p;
    }
    
}


int main()
{
    void insert();
}