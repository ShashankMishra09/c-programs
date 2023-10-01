#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number you want to check the condition with:- ");
    scanf("%i",&num);
    if (num%2==0)
    {
        printf("Your number is an even number");
    }
    else
    {
        printf("You got the odd number");
    }   
    
}