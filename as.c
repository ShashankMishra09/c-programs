#include<stdio.h>
#include<conio.h>
int die(int,int);
int main()
{
    int x,y,z=0;
    x=23;
    y=23;    
    z=die(x,y); 
    printf("%d",z);  
    return 0;
}
int die(int a,int b)
{
    int c=0;
    c = a*b;    
}