#include<stdio.h>
int main()
{
    int i,j,temp,n;
    int arr[10];
    printf("enter the number");
    scanf("%d",&n);
    for(i-0;i<n;i++)
    {
        printf("enter the array number");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[i+1]>arr[i])
            {
                arr[i+1]=arr[j];
            }
            arr[i+1]=temp;
            arr[i+1]=arr[i];
            temp=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return(0);
}