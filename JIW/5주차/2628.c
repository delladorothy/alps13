#include <stdio.h>

int main(void){
    int arr[4];
    int i, a_min, a_max, b_min, b_max;
    for(i=0;i<4;i++){
        scanf("%d", &arr[i]);
    }
    
    if(arr[0]<arr[1]){
        a_min = arr[0];
        a_max = arr[1];
    }
    else{
        a_min = arr[1];
        a_max = arr[0];
    }

    if(arr[2]<arr[3]){
        b_min = arr[2];
        b_max = arr[3];
    }
    else{
        b_min = arr[3];
        b_max = arr[2];
    }

    if(a_max>b_max){
        if(a_min<b_max && a_min>b_min){
            printf("cross");
        }
        else{
            printf("not cross");
        }
    }
    else{
        if(b_min<a_max && b_min>a_min){
            printf("cross");
        }
        else{
            printf("not cross");
        }

    }

    return 0;
}