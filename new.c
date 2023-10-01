#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,p,ans;
    printf("Enter the number and power value:-");
    scanf("%d %d",&i,&p);
    ans=pow(i,p);
    printf("The %d power of %d is %d",p,i,ans);
    return 0;
}