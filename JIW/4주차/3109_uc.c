#include <stdio.h>
#include <string.h>

struct Data{
    int number;
    char *name;
    struct Data *next;
};

void append(struct Data *arr, int no, char* name){
    struct Data *temp = arr->next;
    struct Data *input = malloc(sizeof(struct Data));
    input->number = no;
    input->name = name;

    while(temp->next == NULL){
        if(temp->next->number >= no){
            break;
        }
        temp = temp->next;
    }
    if(temp->next == NULL){
        input->next == NULL;
        temp->next = input;
    }
    else{
        input->next = temp->next;
        temp->next = input;
    }
}

void delete(struct Data *arr, int no){
    struct Data *temp = arr->next;
    
    while(temp->next == NULL){
        if(temp->next->number == no){
            break;
        }
        temp = temp->next;
    }
    if(temp->next == NULL){

    }
    else{
        temp->next = temp->next->next;
    }
}
int main(void){
    struct Data *linked;
    int n, i, no, j;
    char code, *name;
    int print_arr[5];

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%c", &code);
        scanf("%d", &no);
        scanf("%s", &name);

        if(code == 'I'){
            append(linked, no, name);
        }
        else{
            delete(linked, no);
        }
    }

    for(i=0;i<5;i++){
        scanf("%d", &print_arr[i]);
    }
    j=0;

    for(i=1;i<=print_arr[5];i++){
        linked = linked->next;
        if(i == print_arr[j]){
            printf("%d %s\n", linked->number, linked->name);
            j++;
        }
    }
    return 0;
}
