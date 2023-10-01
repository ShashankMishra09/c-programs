#include<stdio.h>
#include<conio.h>
#define FUCK=10;
int main()
{
    int i,j,sum=0;
    scanf("%d",&j);
    for ( i = 0; i <= j ; i++)
    {
        sum=sum+i;
    }
    // sum = FUCK;
    printf("%d",sum);
    return 0;    
}