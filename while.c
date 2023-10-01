#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j,k;
    scanf("%d",&j);
    while (i<=j)
    {
        for ( k = 0; k <=i; k++)
        {
            printf("killme ");
        }
        printf("\n"); 
        i++;      
    }
    return 0;
}