#include<stdio.h>
#define capacity 100
int main()
{
    while (1)
    {
        int ch;
        printf("enter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: insert();
            break;
            case 2: delet();
            break;
            case 3:display();
            break;
        default: printf("invoild choice");
            break;
        }
    }
}
    void insert()
    {
        int front=0,rear=0,queue[capacity],ele;
        printf("enter the element");
        if ( capacity==rear)
        {
            ptintf("queue is full");
        }
        else
        {
             queue[ele]=rear;
             rear++;
        }
    }
    void delet(){
        int front=0,rear=0,i,queue[capacity],ele;
        printf("enter the element");
        if(front==rear)
        {
            printf("queue is empty");
        }
        else
        {
             printf("%d",queue[ele]);
             for ( int i = 0; i <rear-1; i++)
             {
                 queue[i-1]=queue[i];
             rear--;
             }
        }
    }
    void display(){
        int i,ele,queue[capacity],front=0,rear=0;
        if ( front==rear)
        {
            printf("queue is empty");
        }
        else
        {
             printf("enter the element");
             scanf("%d",&ele);
             for(i=front;i<=rear;i++)
             {
                 queue[ele]=rear;
                 printf("%d",queue[i]);
             }
        }
    }