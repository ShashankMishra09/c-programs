#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root;
int len;
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
       root=temp;
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
          p=p->link;
        p->link=temp;
    }
    
}
void show()
{
    struct node* temp;   
    temp=root; 
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
}
void delfrombeg()
{
   struct node* temp;
    temp=root;
    root=temp->link;
    temp->link=NULL;
    free(temp);
    if(root==NULL)
       printf("\nLink list is not here\n");
}
void del()
{
    struct node* temp=root;
    struct node* p;
    struct node* n;
    int i,a=1;
    printf("Enter the place  where you want to delete from: ");
    scanf("%d",&i);
    if(i>len)
        printf("Invalid entry");
    while(a<i-1)
    {
        temp=temp->link;
        --i;
    }
    p=temp->link;
    if(p->link==NULL)
    {
        temp->link=NULL;
        free(p);
    }
    else
    {
        n=p->link;
        p->link=NULL;
        temp->link=NULL;
        temp->link=n;
        free(p);        
    }
        
}
int main()
{
    int ch;
    len=0;
    // printf("%d",len);
    while(1)
    {
        printf("\nEnter 1 to create link list and add node:\n");
        printf("Enter 2 to show link list data:\n");
        printf("3 to delete a node from beginning:\n");
        printf("4 to delete a node from anywhere you want:\n");
        printf("5 to exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            append();
            len=len+1;
            break;
            case 2:
            show();
            break;
            case 3:
            delfrombeg();
            break;
            case 4:
            del();
            break;
            case 5:
            exit(1);
            break;        
        default:
        printf("\nInvalid entry");
            break;
        }       
    }
    // printf("%d",len);
    return 0;
}