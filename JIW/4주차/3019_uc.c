#include <stdio.h>
#include <string.h>

struct Schedule{
    char name[100];
    int year;
    int month;
    int day;
};

void sort(struct Schedule *arr, int n){
    int i, j;
    struct Schedule temp;
    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(strcmp(arr[j].name,arr[j+1].name)==1){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].day > arr[j+1].day){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].month > arr[j+1].month){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++){
            if(arr[j].year > arr[j+1].year){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    int n, m, i;
    struct Schedule *arr;
    scanf("%d", &n);

    arr = (struct Schedule*)malloc(sizeof(struct Schedule)*n);

    for(i=0;i<n;i++){
        scanf("%s", &arr[i].name);
        scanf("%d", &arr[i].year);
        scanf("%d", &arr[i].month);
        scanf("%d", &arr[i].day);
    }

    sort(arr,n);

    for(i=0;i<n;i++){
        printf("%s\n", arr[i].name);
    }

    return 0;
}