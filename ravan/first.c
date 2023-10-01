#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
struct node *root=NULL;
int main()
{
    int ch;
    
    while(1)
    {
        printf("enter the ch");
        scanf("%d",&ch);
            switch (ch)
        {
        case 1:create();
            break;
            case 2: display();
            break;
        default:
            break;
        }
    }
}
void create(){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&temp->data);
if(root==NULL)
{
    root=temp;

}
else
{
     struct node *p;
     p=root;
     while (p->link!=NULL)
     {
         p->link=p;

     }
    temp=p->link;

}
}
void display()
{
    struct node *temp;
    temp=root;
    if(temp=NULL)
    {
        printf("no node in the list");
    }
    else
    {
         while(temp!=NULL)
         printf("%d",temp->data);
         temp=temp->link;
    }
    
}

