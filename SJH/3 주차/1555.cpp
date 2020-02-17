#include <stdio.h>

int n;

long long int f(int n) {
	long long int num;
	num = (long long int)n * ((long long int)n + 1) / 2;
	return num;
}
int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}