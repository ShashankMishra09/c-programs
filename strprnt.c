#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i;
    char ch[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        
        scanf("%s",ch);
    }
    while(ch[i]!='\0'){
        if(i%2==0){
            printf("%c",ch[i]);
        }
        else{
            printf("  %c",ch[i]);
        }
        i++;
    }
    return 0;
}