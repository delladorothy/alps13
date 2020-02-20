/* #include <stdio.h>
struct Data{
    char *name;
    int number;
};
int main(void){
    int n, m, i, j, size=0;
    struct Data *input_data;
    struct Data *save_data;
    char **answer;


    //입력부분
    scanf("%d", &n);
    scanf("%d", &m);

    input_data = (struct Data*)malloc(sizeof(struct Data)*n);
    save_data = (struct Data*)malloc(sizeof(struct Data)*n);
    answer = (char**)malloc(sizeof(char*)*m);
    
    for(i=0;i<n;i++){
        scanf("%s", input_data[i].name);
        scanf("%d", input_data[i].number);
    }

    for(i=0;i<m;i++){
        scanf("%s", &answer[i]);
    }


    //데이터 처리 부분
    for(i=0;i<n;i++){
        
    }
    //출력 부분
    for(i=0;i<m;i++){
        for(j=0;j<)
    }
    return 0;
} */

#include <stdio.h>
#include <string.h>

struct Data{
    char name[100];
    int number;
};

int main(void){
    struct Data *arr;
    char **print_word;
    char name[100];
    int n, m, i, j, number, count=0;

    scanf("%d", &n);
    scanf("%d", &m);

    arr = (struct Data*)malloc(sizeof(struct Data) * n);
    print_word = (char **)malloc(sizeof(char*) * m);

    for(i=0;i<n;i++){
        scanf("%s", name);
        scanf("%d", &number);

        for(j=0 ; j<count ; j++){
            if(arr[j].name == name)
                break;
        }
        if(j==count){
            strcpy(arr[j].name, name);
            arr[j].number = number;
            count++;
        }
        else{
            arr[j].number += number;
        }
    }

    for(i=0;i<m;i++){
        print_word[i] = malloc(sizeof(char)*100);
        scanf("%s", print_word[i]);
    }
    return 0;
}