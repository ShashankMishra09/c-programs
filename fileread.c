#include<stdio.h>
int main()
{
    FILE *ft;
    int num;
    if(ft=fopen("data list.txt","r"));
    {
        printf("error! file not write");
    }
    fscanf(ft,"%d",&num);
    printf("%d",num);
    fclose(ft);
    return(0);
}