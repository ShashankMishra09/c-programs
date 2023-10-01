#include<stdio.h>
#include<conio.h>
int main(){
    int score = 0;
    printf("welcome to game \n");
    printf("press any key to start...\n");
    getch();
    while (1)
    {
        printf("Current score: %d\n", score);
        printf("press 'a' to add 1 to your score, or 'q' to quit.\n");
        int key = getch();
        if(key == 'a'){
            score++;
        }else if(key == 'q'){
            printf("Game Over. Your final score is %d.\n",score);
            break;        
        }else{
            printf("Invalid Input . please try again later.\n");
        }
    }
    return 0;
}