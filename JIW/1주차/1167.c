#include <stdio.h>
int main(void){
    int number[3];
    int temp;

    scanf("%d", &number[0]);
    scanf("%d", &number[1]);
    scanf("%d", &number[2]);

    if(number[0] > number[1]){
        temp = number[0];
        number[0] = number[1];
        number[1] = temp;
    }

    if(number[1] > number[2]){
        temp = number[1];
        number[1] = number[2];
        number[2] = temp;
    }

    if(number[0] > number[1]){
        printf("%d", number[0]);
    }
    else{
        printf("%d", number[1]);
    }

    return 0;
}