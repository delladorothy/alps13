#include <stdio.h>

int main(void){
    int length[3];
    int max_number_index;
    int sum;

    scanf("%d", &length[0]);
    scanf("%d", &length[1]);
    scanf("%d", &length[2]);

    if(length[0] < length[1]){
        max_number_index = 1;
    }
    else{
        max_number_index = 0;
    }

    if(length[max_number_index] < length[2]){
        max_number_index = 2;
    }

    sum = length[0] + length[1] + length[2];

    sum -= length[max_number_index];
    if(sum > length[max_number_index]){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}