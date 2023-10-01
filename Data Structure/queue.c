#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* link;
};
struct node* front;
struct node* rear;
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else 
    {
        rear->link=temp;
        rear=temp;
        // rear->link=NULL;
    }   
}
void del()
{
    struct node* te=front->link;
    struct node* t=front; 
    struct node* temp=front;
    if(front==NULL) 
        printf("\n\nThere is no queue to delete\n\n");
    else 
    {
        while(te!=NULL)
        {
        
            temp->data=te->data; 
            temp->link=te;
            te=te->link;
            
            
        }
        while(t!=NULL)
        {
            printf("%d\n",t->data);
            t=t->link;
        }
        printf("\n%d",t->data);
        printf("chexk");
        rear=temp;
        rear->link=NULL;
        free(te);
        // front=temp->link;
        // temp->link=NULL;
        // free(temp);
    }    
}
void show()
{
    struct node* temp;   
    temp=front; 
    if(front==NULL)
        printf("\n\nThere is no queue to show\n\n");
    else 
    {
        while(temp->link!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
        printf("%d\n",temp->data);
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("Enter 1 to create queue:\n");
        printf("Enter 2 del:\n");
        printf("Enter 3 to show:\n");
        printf("Enter 4 to exit:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            append();
            break;
            case 2:
            del();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("Invalid Entry");
        }
    }
    return 0;
}