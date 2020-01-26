#include <stdio.h>
int main(void){
    int number;
    int tens, ones;

    scanf("%d", &number);
    tens = number%10;
    ones = number/10;

    number = tens * 10;
    number += ones;

    number *= 2;
    if(number >= 100){
        number -= 100;
    }
    
    printf("%d\n", number);
    if(number > 50){
        printf("OH MY GOD");
    }
    else{
        printf("GOOD");
    }
}