#include <stdio.h>
int *number;
int count, m, n;

void countSum(int index, int sum){
    if(index == m){
        if(sum == n){
            count++;
        }
        return;
    }

    countSum(index+1, sum + number[index]);
    countSum(index+1, sum - number[index]);
}

int main(void){
    int i;

    scanf("%d", &n);
    scanf("%d", &m);

    number = (int*)malloc(sizeof(int)*m);

    for(i=0;i<m;i++){
        scanf("%d", &number[i]);
    }
    count = 0;
    countSum(0, 0);
    printf("%d", count);
    return 0;
}