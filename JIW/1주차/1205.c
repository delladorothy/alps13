#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, temp;
    float max;
    int flag = 0;

    scanf("%f", &a);
    scanf("%f", &b);

    if(a < 0){
        flag++;
    }
    if(b < 0){
        flag++;
    }

    if((flag==1) && (a<0)){
        temp = a;
        a = b;
        b = temp;
    }

    //두 실수 모두 양수
    if(flag==0){
        max = a+b;
        
        temp = a*b;
        if(max < temp){
            max = temp;
        }

        temp = powf(a, b);
        if(max < temp){
            max = temp;
        }

        temp = powf(b, a);
        if(max < temp){
            max = temp;
        }
    }
    //하나만 음수
    else if(flag==1){
        max = a-b;

        temp = powf(a, b);
        if(max < temp){
            max = temp;
        }

        temp = powf(b, a);
        if(max < temp){
            max = temp;
        }
    }
    //둘 다 음수
    else{
        max = a*b;

        temp = powf(a, b);
        if(max < temp){
            max = temp;
        }

        temp = powf(b, a);
        if(max < temp){
            max = temp;
        }
    }
    printf("%f", max);
    return 0;
}