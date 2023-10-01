#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,j=0;
    printf("Enter the number :- ");
    scanf("%d",&n);
    j=n;
    while (n!=0)
    {
        i=n%10;
        sum=sum+i*i*i;
        n=n/10;
    }
    if(sum==j)
        printf("Number is an armstrong number");
    else
        printf("Number is not an armstrong number");  
    return 0;   
}