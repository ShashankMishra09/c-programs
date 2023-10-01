#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *front;
struct node *rear;
void insert();
void delet();
void display();
void main()
{
    int ch;
    printf("enter the choice");
    scanf("%d",&ch);
    while (ch!=4)
    {
        switch ( ch)
        {
        case 1:insert();
            break;
        case 2:delet();
        break;
        case 3: display();
        break;
        default: ("enter the valid choice");
            break;
        }
    }
    
}
void insert()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("engter the data");
    scanf("%d",&ptr->data);
    if(ptr==NULL)
    {
        printf("stack is overflow");
    }
    else
    {
         printf("enter the value");
         scanf("%d",&item);
         ptr->data=item;
         if (front==NULL)
         {
             front=ptr;
             rear=ptr;
             front->link=NULL;
             rear->link=NULL;
         }
         else
         {
              rear->link=ptr;
              rear=ptr;
              rear->link=NULL;
         }
         
         
    }
    
}
void delet()
{
    struct node *ptr;
    if(front==NULL){
        printf("stack is underflow");
    }
    else
    {
         ptr=front;
         front=front->link;
         free(ptr);
    }
    
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    {
        printf("stack is underflow");
    }
    else
    {
         while (ptr!=NULL)
         {
             printf("%d",ptr->data);
             ptr=ptr->link;
         }
         
    }
    
}