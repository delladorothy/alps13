#include <stdio.h>
int main(void){
    int score, time;
    int remain, goals;

    scanf("%d", &time);
    scanf("%d", &score);

    remain = 90 - time;
    goals = remain / 5;
    goals++;

    if(remain % 5 == 0){
        goals--;
    }

    score += goals;

    printf("%d", score);
    return 0;
}