#include<stdio.h>
#include<conio.h>
// =============================call by value====================================
// int expo(int exp,int n);
// int main()
// {
//     int num,numexp,res;
//     printf("Enter the num and exp:\n");
//     scanf("%d %d",&num,&numexp);
//     res=expo(numexp,num);
//     printf("%d",res);
//     return 0;
// }
// int expo(int exp,int n)
// {
//     int i,ans=1;
//     for(i=0;i<exp;i++)
//        ans=ans*n;
//     return(ans);
// }
// ======================================call by reference=====================
int expo(int *exp,int *n);
int main()
{
    int *res,num,numexp;
    printf("Enter number and exp:\n");
    scanf("%d %d",&num,&numexp);
    *res=(&numexp,&num);
    printf("%d",res);
    return 0;
}
int expo(int *exp,int *n)
{
    int *ans,i,j=1;
    *ans=&j;
    for(i=0;i< *exp;i++)
       *ans=*ans * *n;
    return(*ans);       
}