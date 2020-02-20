#include <stdio.h>

long long int n;


// 이 부분에 들어가야 될 코드를 작성하여 제출
int sqrt(long long int n){
    long long int temp = 0;
    int k = 1;

    while(temp<=n){
        k*=2;
        temp = k * k;
    }

    k/=2;
    temp = k * k;
    while(temp<=n){
        k++;
        temp = k * k;
    }
    return k-1;
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}