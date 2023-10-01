#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,j=0;
    printf("Enter the number you want to check:- ");
    scanf("%d",&i);
    for(a=2;a<i;a++)
    {
        if(i%a==0)
        {
            printf("%d is not a prime no",i);
            j=1;
            break;
        }
    }
    if(j==0)
        printf("%d is a prime no",i);        
    return 0;
}

