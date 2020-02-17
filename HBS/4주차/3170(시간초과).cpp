#include <iostream>
#include <string>
using namespace std;

typedef struct test
{
	string name;
	int num;
}test;

int main(void)
{
	int n, m, isit = 0;
	int result = 0;
	cin >> n >> m;
	test* tn = new test[n];
	test* tm = new test[m];
	for (int i = 0; i < n; i++)
	{
		cin >> tn[i].name >> tn[i].num;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tm[i].name;
	}
	for (int i = 0; i < m; i++)
	{
		isit = 0;
		result = 0;
		for (int s = n - 1; s >= 0; s--)
		{
			if (tm[i].name == tn[s].name)
			{
				isit++;
				result += tn[s].num;
			}
			if (isit == 2)break;
		}
		if (isit == 0)cout << "0" << endl;
		else
		{
			cout << result << endl;
		}
	}
}