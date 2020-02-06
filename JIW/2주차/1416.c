#include<stdio.h>

int main(void){
    int i = 0;
    int binaryNumber[255] = {0, };
    int demiNumber;

    scanf("%d", &demiNumber);

    if(demiNumber==0){
        printf("0");
        return 0;
    }
    while(demiNumber){
        binaryNumber[i] = demiNumber % 2;
        demiNumber /= 2;
        i++;
    }

    for(i=i;i--;i>=0){
        printf("%d", binaryNumber[i] );
    }

    return 0;
}