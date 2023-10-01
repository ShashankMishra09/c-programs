#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;
void     append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
        root=temp;
    else 
    {
        struct node* p;
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;

        }
        p->right=temp;
        temp->left=p;
    }

}
void show()
{
    struct node* temp;
    temp=root;
    while(temp->right!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->right;
    }
    printf("%d\n",temp->data);
}
int main()
{
    int ch;
    while(1)
    {
        printf("Enter 1 to create the doubly:\n");
        printf("Enter the 2 to show the elements:\n");
        printf("Enter 3 to exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                append();
                break;
            case 2:
                show();
                break;
            case 3:
                exit(1);
                break;
            default:printf("Invalid entry:");
                break;
        }
    }
    return 0;
   
}