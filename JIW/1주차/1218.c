#include <stdio.h>

int main(void){
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    //삼각형 아닐 경우
    if((a + b) <= c){
        printf("삼각형아님");
    }
    //정삼각형, 이등변삼각형
    else if((a==b)||(b==c)){
        if(a == c){
            printf("정삼각형");
        }
        else{
            printf("이등변삼각형");
        }
    }
    //4:직각삼각형
    else if( a*a + b*b == c*c){
        printf("직각삼각형");
    }
    else{
        printf("삼각형");
    }
    return 0;
}