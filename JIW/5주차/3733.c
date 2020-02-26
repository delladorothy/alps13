#include <stdio.h>
int arr[10000001] = {0, };

int hail(long long int k){
    if(k>10000000){
        if(k%2 == 1){
            return hail(3*k+1) + 1;
        }
        else{
            return hail(k/2) + 1;
        }
    }
    if(k==1){
        return 1;
    }
    else{
        if(arr[k])
            return arr[k];
        if(k%2 == 1){
            arr[k] = hail(3*k+1) + 1;
        }
        else{
            arr[k] = hail(k/2) + 1;
        }
    }
}

int main(void){
    long long int a, b, i, index;
    int max = 0, len;

    scanf("%11d", &a);
    scanf("%11d", &b);

    for(i=a;i<=b;i++){
        len = hail(i);
        if(len>max){
            index = i;
            max = len;
        }
    }

    printf("%d %d", index, max);
    return 0;
}