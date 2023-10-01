#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("Enter all the number:- ");
    scanf("%d %d %d",&i,&j,&k);
    if((i<j)&&(k<j))
       printf("%d is greater than all",j);
    if((i>j)&&(i>k))
       printf("%d is greater than all",i);
    if((k>j)&&(k>i))  
       printf("%d is greater than all",k);
    return 0;
}