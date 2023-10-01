#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,res=0,j=0;
    printf("Enter the number :- ");
    scanf("%d",&n);
    j=n;
    while (n!=0)
    {
        i=n%10;
        res=res*10+i;
        n=n/10;
    }
    if (j==res)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is a not palindrome");
    }
    
    return 0;   
}