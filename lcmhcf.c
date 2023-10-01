#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x,y,t,hcf,lcm;
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    } 
    hcf=a;
    lcm=(x*y)/hcf;
    printf("%d %d",hcf,lcm);   
    return 0;
}