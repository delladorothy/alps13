#include <stdio.h>

/*
int main(void){
    int n, m, i, j, temp;
    int* arr;
    int* arr2;
    int* arr3;

    //입력 부분
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);

    for(i=0 ; i<n ; i++){
        scanf("%d", &arr[i] );
    }

    scanf("%d", &m);
    arr2 = (int*)malloc(sizeof(int) * m);
    arr3 = (int*)malloc(sizeof(int) * m);

    for(i=0 ; i<m ; i++){
        scanf("%d", &arr2[i]);
    }

    //출력 부분
    for(i=0; i<m; i++){
        temp = arr2[i];
        arr3[i] = 0;

        for(j=0; j<n; j++){
            if(arr[j] == temp){
                arr3[i] = 1;
                break;
            }
        }
    }

    for(i=0; i<m; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}
*/

int main(void){
    int n, m, i, temp;
    int arr[10000000] = {0, };
    int* questions;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &temp);
        arr[temp-1] = 1;
    }

    scanf("%d", &m);
    questions = (int*)malloc(sizeof(int) * m);
    for(i=0;i<m;i++){
        scanf("%d", &questions[i]);
    }

    for(i=0;i<m;i++){
        printf("%d ", arr[questions[i]-1]);
    }


    return 0;
}