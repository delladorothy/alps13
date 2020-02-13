#include <stdio.h>

long long int n;

long long int f(long long int n) {
	long long num=0;
	while (n) {
		num = (num * 10) + (n % 10);
		n = n / 10;
	}
	return num;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld\n", f(n));
}