#include <stdio.h>
int n, k;

int main(void){
    int i, j, count=0, sum;
    int *arr;

    scanf("%d", &n);
    scanf("%d", &k);
    arr = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
            if(sum >= k){
                break;
            }
        }
        if(sum==k)
            count++;
    }
    printf("%d", count);
    return 0;
}