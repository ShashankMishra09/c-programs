#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,res=0;
    printf("Enter the number :- ");
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("Reversed no is 0%d",n/10);
    }
    else
    {
        while (n!=0)
    {
        i=n%10;
        res=res*10+i;
        n=n/10;
    }
    printf("Reversed number is %d",res);
    }
    
    return 0;   
}