#include <iostream>
using namespace std;

int n, d[110];
int f()
{
	int max_i = 0;
	int max = d[0];
	for (int i = 1; i < n; i++)
	{
		if (max < d[i])
		{
			max = d[i];
			max_i = i;
		}
	}
	return max_i + 1;
}
int main(void)
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> d[i];

	cout << f();
	return 0;
}