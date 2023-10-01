#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Enter the year you want to check-: ");
    scanf("%d",&i);
    if(i%4==0)
       printf("%d is a leap year.",i);
    else
       printf("%d is not a leap year",i);
    return 0;            
}