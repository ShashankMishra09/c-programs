#include<stdio.h>
int main()
{
    int key,i,j,n,temp;
    int arr[n];
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the key element");
    scanf("%d",&key);
    for ( int i = 0; i <n; i++)
    {
        for ( int i = 0; i < n-1-i; i++)
        {
            if (key==arr[i])
            {
               temp=arr[i];
               arr[i+1]=arr[i];
               arr[i+1]=temp; 
            }
            printf("%d",arr[i],arr[i+1]);    
        }
    }
    return(0);
}