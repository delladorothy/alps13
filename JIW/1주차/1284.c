#include <stdio.h>

int main(void){
    int number;
    int a, b, i;

    scanf("%d", &number);
    
    //number가 2이하일 경우 !!
    if(number<4){
        printf("wrong number");
        return 0;
    }

    //첫번째 소수 & 두번째 소수
    a=2;
    while(number % a){
        a++;
    }
    b = number / a;

    //예외처리
    if(b == 1){
        printf("wrong number");
        return 0;        
    }
    
    i=2;
    while(b % i){
        i++;
    }

    if(i==b){
        printf("%d %d", a, b);
    }
    else{
        printf("wrong number");
    }
    return 0;
}