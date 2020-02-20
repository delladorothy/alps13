//clear!!

#include <stdio.h>

int main(void){
    int a, b, sum = 0, i, temp, index;
    int arr[5001] = {0, };
    
    scanf("%d", &a);
    scanf("%d", &b);

    for(i=1;i<5000;i++){
        temp = i;
        index = i;
        while(temp){
            index += temp % 10;
            temp /= 10;
        }
        if(index<=5000){
            arr[index] = 1;
        }
    }
    for(i=a;i<=b;i++){
        if(arr[i]==0){
            sum+=i;
        }
    }

    printf("%d", sum);
    return 0;
}