#include<stdio.h>
void expo(int exp,int base);
int main()
{
    int res,base,exp;
    printf("enter the base number");
    scanf("%d",&base);
    printf("enter the exponetial");
    scanf("%d",&exp);
    res=pow(base,exp);
    printf("%d",res);
}
void expo(int exp,int base)
{
    
}