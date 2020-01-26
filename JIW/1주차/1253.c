#include <stdio.h>

int main(void){
    int a, b, temp;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    for(;a<=b;a++){
        printf("%d ", a);
    }
    return 0;
}