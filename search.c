#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,k=0;
    int *ptr;
    printf("Enter the size of array:  ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(int i =0;i<n;i++)
       scanf("%d",&ptr[i]);
    printf("Enter the element you want to search:  ");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(j==ptr[i])
        {
            k=1;
            printf("The element %d id at the %d place in the array",j,i+1);
        }
            
    } 
    if(k==0)
        {
         printf("element is not in the array");
        } 
}