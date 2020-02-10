#include <iostream>
using namespace std;

int n;
long long int d[110];
int f()
{
	int min = d[1];
	for (int i = 2; i <= n; i++)
	{
		if (min > d[i])
		{
			min = d[i];
		}
	}
	return min;
}
int main(void)
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> d[i];

	cout << f();
	return 0;
}