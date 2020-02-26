#include <stdio.h>

int Max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(void){
    int n, i;
    int *stair, *score;

    scanf("%d", &n);
    stair = (int*)malloc(sizeof(int)*n);
    score = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d", &stair[i]);
    }

    score[0] = stair[0];
    score[1] = stair[0] + stair[1];
    score[2] = Max(stair[0]+stair[2], stair[1]+stair[2]);

    for(i=3;i<n;i++){
        score[i] = Max((score[i-3]+stair[i-1]+stair[i]),(score[i-2]+stair[i]));
    }

    printf("%d", score[n-1]);
    return 0;
}