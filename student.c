#include<stdio.h>
#include<conio.h>
#define SUB 6
int avg(int a[],int n);
int per(int a[],int n);
int main()
{
    int i,subs[SUB];
    float grade[SUB],sum=0.0;
    printf("Enter the %d subj marks \n",SUB);
    for ( i = 0; i < SUB; i++)
    {
        scanf("%d",&subs[i]);
    }
    for ( i = 0; i < SUB; i++)
    {
        grade[i]=subs[i]/10;
    }
    for(i=0;i<SUB;i++)
    {
        sum=sum+grade[i];
    }
    printf("Cgpa is %f \n",sum/6.0);
    printf("avg is %d\n",avg(subs,SUB));
    printf("percent is %d\n",per(subs,SUB));
    if(per(subs,SUB)<33)
       printf("Student fail\n");
    else 
       printf("Student pass\n");
    if(per(subs,SUB)>=60)
       printf("first division\n");
    if(per(subs,SUB)<60 && per(subs,SUB)>=50)
       printf("second division\n");
    if(per(subs,SUB)>=33 && per(subs,SUB)<50)
       printf("third division");
    return 0;
}
int avg(int a[],int n)
{
    int avrg=0,sum=0,i;
    for(i=0;i<n;i++)
       sum=sum+a[i];
    avrg=sum/6;
    return(avrg);
}
int per(int a[],int n)
{
    int perc=0,sum=0,i;
    for(i=0;i<n;i++)
       sum=sum+a[i];
    perc=(sum*100)/600;
    return(perc);
}