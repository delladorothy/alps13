//clear!!
#include <stdio.h>

int n, k, d[1010];
// 이 부분에 들어가야 될 코드를 작성하여 제출
int lower_bound(int number){
    int index, i;

    for(i=1;i<=n;i++){
        if(d[i]>=number)
            return i;
    }

    return n+1;

}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}