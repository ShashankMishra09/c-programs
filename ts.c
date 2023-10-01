#include<stdio.h>
#include<conio.h>
int main()
{
    int stu[2][5],i,j,k,l;
    for ( i = 1; i <= 2; i++)
    {
        printf("Enter the marks of students %d:\n",i);
        for ( j = 1; j <= 5; j++)
        {
            scanf("%d",&stu[i][j]);
        }        
    }
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=2;i++)
        {   
            l=i;
            k=stu[i][j];
            if(stu[i][j]<stu[i+1][j])
            {
                k=stu[i+1][j];
                l=i;
            }   
        }
        printf("Student no %d has highest marks in %d subject\n",l,j);       
    }
    return 0;
}
