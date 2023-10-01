#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[2][2],arr2[2][2],mul[2][2],k,sum=0;
    for(int i=0;i<2;i++)
       for(int j=0;j<2;j++)
          scanf("%d",&arr1[i][j]);
    for(int i=0;i<2;i++)
       for(int j=0;j<2;j++)
          scanf("%d",&arr2[i][j]);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                sum=sum+(arr1[i][k]*arr2[k][j]);
            }
            mul[i][j]=sum;
            sum=0;
        }
    }   
    for(int i=0;i<2;i++)
       for(int j=0;j<2;j++)
          printf("\n%d\n",mul[i][j]);
    return 0;
}