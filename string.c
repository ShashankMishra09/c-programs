#include<stdio.h>
#include<conio.h>
void rev();
int main()
{
    printf("enter a string:  ");
    rev();
    return 0;
}
void rev()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        rev();
        printf("%c",c);
    }
}