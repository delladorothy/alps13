//clear!

#include <stdio.h>

int n;

long long int f(int n){
    long long int output=0;
    for(;n>0;n--){
        output+=n;
    }
    return output;
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}