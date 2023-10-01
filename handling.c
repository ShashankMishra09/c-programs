#include<stdio.h>
int main()
{
    FILE *ftp;
    int num;
    if(ftp == fopen("data list.txt","w"))
    {
        printf("error!");
    }
    else{
    printf("enter the number:");
    scanf("%d",&num);
    fprintf(ftp,"%d",num);
    fclose(ftp);
    }
    return(0);
}