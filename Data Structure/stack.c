#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* link;
};
struct node* tos;
void push()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d",&temp->data);
    temp->link=tos;
    tos=temp;    
}
void show()
{
    struct node* temp=tos;
    if(tos==NULL)
        printf("Stack is underflow:");
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
}
void pop()
{
    struct node* temp;
    if(tos==NULL)
        printf("Stack is underflow");
    else 
    {
        temp=tos;
        tos=tos->link;
        temp->link=NULL;
        free(temp);
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("Enter 1 to push:\n");
        printf("Enter 2 to pop:\n");
        printf("Enter 3 to show:\n");
        printf("Enter 4 to exit:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(1);
            break;
        }
    }
    return 0;
}