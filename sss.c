#include<stdio.h>
int main()
{
    int num,i,total,avg;
    int hd,eg,py,ch,phy;
    printf("enter the number each sub");
    scanf("%d%d%d%d%d",&hd,&eg,&py,&ch,&phy);
    for(i=1;i<=20;i++)
    {
        if(i==hd<=100 && i==eg<=100 && i==py<=100 && i==ch<=100 && i==phy<=100)
        {
            printf("highest marks in hd");
        }
        else
        {
            printf("not high marks");
        }
    }    
        return(0);
}