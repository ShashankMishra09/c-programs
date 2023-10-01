#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int arr[10];
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++){
    temp=arr[i];
    j=i-1;
    while ( i>=0 && arr[i]>temp)
    {
        arr[i+1]=arr[i];
        j=j-1;

    }
    arr[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return(0);
    
}