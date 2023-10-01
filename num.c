#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i;
    gets(i);
    if (sizeof(i)==1)
    {
        printf("It is a character");
    }
    return 0;    

}