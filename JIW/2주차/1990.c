#include<stdio.h>

int main(void){
    int i = 0, size = 0, n = 0;
    char arr[500];
    scanf("%s", arr);

    for(;arr[size] != '\0';size++){
        arr[size] -= '0';
    }

    for(;i<size;i++){
        n += arr[i];
    }

    if((n%3)==0){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}