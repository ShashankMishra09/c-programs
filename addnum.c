#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,res=0,sum=0;
    printf("Enter the number :- ");
    scanf("%d",&n);
    while (n!=0)
    {
        i=n%10;
        // res=res*10+i;
        sum=sum+i;
        // printf(" %d ",sum);
        n=n/10;
    }
    printf("the sum of number is %d",sum);    
    return 0;   
}