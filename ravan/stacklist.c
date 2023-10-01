#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
    int top;
};
struct node *root=NULL;
int main()
{
    int ch;
    while(1){
        printf("enter the number");
    scanf("%d",&ch);
    switch ((ch))
    {
    case 1:insert();
        break;
        case 2:delet();
        break;
    case 3: display();
    break;
    default: printf("invoid choice");
        break;
    }
    }
}
void insert()
{
    struct node *temp;
    int val;
    temp=(struct  node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&temp->data);
    if(temp!=NULL)
    {
        printf("stack is overflow");
    }
    else if (root=NULL)
    {
        temp=temp->data;
        temp=root;
        temp->link=NULL;
    }
    else
    {
        temp->link=root;
        root=temp;
        temp=temp->data;
    } 
}
void delet()
{
    struct  node *temp;
    if(root=NULL)
    {
        printf("stack is underflow");
    }
    else {
        root=root->link;
        free(temp);

    }
}
void display()
{
    struct  node *temp;
    if(temp=NULL)
    {
        printf("stack is overflow");
    }
    else
    {
         while (temp!=NULL)
         {
             printf("%d\n",temp->data);
             temp=temp->link;
         }    
    }
}