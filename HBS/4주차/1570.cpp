#include <iostream>
using namespace std;

int n, d[1001], k;
int lower_bound(int num)
{
	int i = 1;
	for (i; i <= n; i++)
	{
		if (d[i] >= num)break;
	}
	return i;
}

int main(void)
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> d[i];
	}
	cin >> k;
	cout << lower_bound(k);
}