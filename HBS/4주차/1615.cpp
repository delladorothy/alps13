#include <iostream>
using namespace std;

int d(int k)
{
	return k / 1000 + (k % 1000) / 100 + (k % 100) / 10 + k % 10 + k;
}

int main(void)
{
	int a, b, sum = 0;
	bool isit = false;
	cin >> a >> b;
	for (a; a <= b; a++)
	{
		for (int i = 1; i <= a; i++)
		{
			if (d(i) == a)
			{
				isit = true;
				break;
			}
		}
		if (isit == false)
		{
			sum += a;
		}
		isit = false;
	}
	cout << sum;
}