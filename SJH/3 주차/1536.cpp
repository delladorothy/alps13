#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n;

long long int d[110];

long long int f() {
	long long int num=d[1];
	for (int i = 1; i <= n; i++) {
		if (num > d[i]) {
			num = d[i];
		}
	}


	return num;
}


int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> d[i];

	printf("%lld", f());
	return 0;
}