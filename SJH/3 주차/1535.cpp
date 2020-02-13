#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int n, d[110];

bool desc(int a, int b) {
	return a > b;
}

int f() {
	int d2[110];
	int k=0;
	copy(d, d + n, d2);

	sort(d2, d2 + n, desc);
	for (int i = 0; i < n; i++) {
		if (d2[0] == d[i]) {
			k = i;
			break;
		}
		
	}

	return k+1;
}


int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> d[i];

	printf("%d", f());
	return 0;
}
