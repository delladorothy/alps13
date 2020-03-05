#include <stdio.h>

int arr[20];
int count, n, s;
void find(int index, int sum){
    if(index == n)
        return;
    if(sum + arr[index] == s)
        count++;
    
    find(index+1, sum);
    find(index+1, sum+arr[index]);
}

int main(void){
    int i;

    scanf("%d", &n);
    scanf("%d", &s);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    count = 0;

    find(0, 0);

    printf("%d", count);
    return 0;
}