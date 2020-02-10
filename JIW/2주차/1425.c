#include <stdio.h>

int main(void){
    int n, size;
    int* arr;
    int i, j;
    int temp;

    scanf("%d", &n);
    scanf("%d", &size);

    arr = (int*)malloc(sizeof(int) * n);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n ;i++){
        for(j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
        if((i+1)%size == 0)
            printf("\n");
    }

    return 0;
}