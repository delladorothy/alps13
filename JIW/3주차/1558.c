//clear!
#include <stdio.h>

long long int n;

// 이 부분에 들어가야 될 코드를 작성하여 제출
long long int f(long long int k){
    int i, j;
    int arr[30];
    long long int temp = 1;
    i=0;
    
    while(k){
        arr[i] = k % 10;
        k /= 10;
        i++;
        temp *= 10;
    }

    i--;
    temp /= 10;

    k=0;
    for(j=0;j<=i;j++){
        k += arr[j] * temp;
        temp /= 10;
    }

    return k;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}