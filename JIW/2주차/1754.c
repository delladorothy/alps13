#include <stdio.h>

int main(void){
    int i=0, j=0;
    char n1[100], n2[100];
    scanf("%s", n1);
    scanf("%s", n2);

    while(n1[i] != '\0')
        i++;

    while(n2[j] != '\0')
        j++;

    if(i==j){
        i=0;
        while(n1[i] == n2[i])
            i++;
        
        if(n1[i]>n2[i]){
            printf("%s %s", n2, n1);
        }
        else{
            printf("%s %s", n1, n2);
        }
    }
    else if(i>j){
        printf("%s %s", n2, n1);
    }
    else{
        printf("%s %s", n1, n2);
    }
    return 0;
}