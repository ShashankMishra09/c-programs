#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int i;
    printf("Enter the no of day ");
    scanf("%d",&i);
   switch (i)
    {
        case 1:
            printf("Sunday");        
        break;
        case 2:
            printf("Monday");
        break;
        case 3:
            printf("Tuesday");
        break;
        case 4:
            printf("Wednesday");
        break;
        case 5:
            printf("Thursday");
        break;
        case 6:
            printf("Friday");
        break;
        case 7:
            printf("Saturday");
        break;    
        default:
            goto c;
            printf("Who the fuck made the 8th day huh! your dad?");  
    }
    c:printf("fuck off");
    return 0;
}