#include <stdio.h>

int main(void){
    int height[9];
    int i, j, k, sum = 0;

    for(i=0;i<9;i++){
        scanf("%d", &height[i]);
        sum += height[i];
    }

    sum -= 100;

    //오름차순 정렬
    for(i=8;i>0;i--){
        for(j=0;j<i;j++){
            if(height[j] > height[j+1]){
                k = height[j];
                height[j] = height[j+1];
                height[j+1] = k;
            }
        }
    }
    //두 합이 sum이 되는 i, j를 찾아냄
    for(i=0;i<8;i++){
        for(j=i+1;j<9;j++){
            if(height[i]+height[j] == sum)
                goto PRINT;
        }
    }

    PRINT:
        for(k=0;k<9;k++){
            if(k != i && k != j){
                printf("%d\n", height[k]);
            }
        }

    return 0;
}