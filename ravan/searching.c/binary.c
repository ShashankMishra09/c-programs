// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int min,i,j,n,temp,mid;
//     int arr[5];
//     prinf("enter the number");
//     scanf("%d",&n);
//     printf("enter the temp");
//     scanf("%d",&temp);
//     for (int i = 0; i < 5; i++)
//     {
//         min=i;
//         for (int j = 0; i < 4; j++)
//         {
//             mid=i+j/2;
//         }
        
//     }
//     for ( int j = 0; i <4-i;j++)
//     {
//         if (temp==arr[mid])
//         {
//             printf("%d",arr[mid]);
//             min=j;
//         }
//         else if ( temp>arr[mid])
//         {
//             mid=mid+1;
//             printf("%d",mid+1);
//         }
//         else
//         {
//              mid=mid-1;
//              printf("%d",mid-1);
//         }
//         return(0);
//     }
/*  ================ shashank version ============ */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int i,j,temp,n,k,val,m=0;
    int *ptr;
    printf("Enter the size of array:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the values of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
    printf("Enter the value you want to find: ");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(val!=ptr[i])
           m=1;
    }
    if(m==1)
        printf("The given element %d is not in the array",val);
    else
    {
        k=(n-1)/2;
        if(val==ptr[k])
        {
            printf("The number %d is at %d place: ",val,k+1);
        }
        else if(val<ptr[k])
        {
            k=k/2;
            if  
        }
    }
    
}