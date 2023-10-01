#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char c;
    float f;
    double d;    
    printf("size of int is %d\n",sizeof(i));
    printf("size of char is %c\n",sizeof(c));
    printf("size of float is %f\n",sizeof(f));
    printf("size of double is %ld",sizeof(d));
    return 0;
}