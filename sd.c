#include<stdio.h>
int main()
{
    int p,c,m,com,total,h;
    float avg,per;
    printf("enter marks of studentd");
    scanf("%d%d%d%d%d%d",&p,&c,&m,&com,&h);
    total=p+c+m+com+h;
    printf("%d",total);
    avg=total/600;
    per=(total*100)/600;
    printf("%f",avg);
    if(per>=33)
    {
        printf("result pass");
    }
    else if(per>=70)
    {
        printf("first divion");
    }
    else if(per>=60 && per<70)
    {
        printf("first divion");
    }
    else if(per>=50 && per<60)
    {
        printf("second divion");
    }
    else if(per>=40 && per<50)
    {
        printf("third divion");
    }
    return(0);
}