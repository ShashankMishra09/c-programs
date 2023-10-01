#include<stdio.h>
#define capacity 100
void insert();
int delet();
void display();
 int top=-1,i,ele,ch;
    int stack[capacity];
int main()
{
    int ch;
    while (1)
    {
        printf("enter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: insert();
            break;
            case 2: delet();
            break;
            case 3: display();
            break;
        default: printf("invalid choice");
            break;
        }
    }
}
    void insert()
    {
        if(top==capacity-1)
        {
            printf("stack is overflow");
        }
        else
        {
             top++;
             stack[ele]=top;
        }    
    }
    int delet()
        {
            if(top==-1)
            {
                printf("enter the underflow");
            }
            else
            {
             stack[ele]=top;
             top--;
             return top;
            }
            
        }
        void display()
        {
            if(top==capacity-1)

            {
                printf("stack is overflow");
            }
            else
            {
                printf("enter the element");
                scanf("%d",&ele);
                 for(i=0;i<ele;i++)
                 {
                    printf("%d",stack[i]);
                 }

            }
            
            
        }
    