#include <stdio.h>

int main(void){
    int n1[6];
    int n2[6];
    int bonus, same=0;
    int i, j;

    for(i=0;i<6;i++){
        scanf("%d", &n1[i]);
    }
    scanf("%d", &bonus);
    for(i=0;i<6;i++){
        scanf("%d", &n2[i]);
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(n1[i] == n2[j])
                same++;
        }
    }
    //1등
    if(same == 6){
        printf("1");
    }
    //2, 3등
    else if(same == 5){
        for(i=0;i<6;i++){
            if(n2[i] == bonus){
                printf("2");
                return 0;
            }
        }
        printf("3");
    }
    //4등
    else if(same == 4){
        printf("4");
    }
    //5등
    else if(same == 3){
        printf("5");
    }
    //꽝
    else{
        printf("0");
    }
    return 0;
}