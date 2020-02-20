#include <stdio.h>
#include <string.h>

int main(void){
    char name[10001][10];
    int i, j, count, n, no;
    char code;
    char temp[10];
    int print_arr[5];
    scanf("%d",&n);

    memset(&name, 0, sizeof(char)*100010);
    for(i=0;i<n;i++){
        scanf("%c", &code);
        scanf("%d", &no);
        scanf("%s", temp);
        if(code == 'I'){
            if(name[no] == "\0"){
                strcpy(name[no],temp);
            }
        }
        else{
            strcpy(name[no],"\0");
        }
    }

    for(i=0;i<5;i++){
        scanf("%d", print_arr[i]);
    }

    count = 0; j=0;
    for(i=1;i<10001;i++){
        if(name[i] != "\0"){
            count ++;
        }
        if(count == print_arr[j]){
            printf("%d %s\n", i, name[i]);
            j++;
        }
    }
    return 0;
}
