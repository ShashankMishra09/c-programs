#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter how long the pattern you want:- ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("mc ");
        }
        printf("\n");
    }
    return 0;
}