#include <iostream>
using namespace std;


int main(void)
{
	int n, m, k;
	int x1, y1, x2, y2, u;
	cin >> n >> m >> k;
	long long int arr1[1001][1001], arr2[1001][1001];

	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < m; s++)
		{
			arr2[i][s] = 0;
			arr1[i][s] = 0;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> u;
		arr1[x1][y1] = arr1[x1][y1] + u;

		arr1[x2 + 1][y1] = arr1[x2 + 1][y1] - u;
		arr1[x1][y2 + 1] = arr1[x1][y2 + 1] - u;

		arr1[x2 + 1][y2 + 1] = arr1[x2 + 1][y2 + 1] + u;


	}
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < m; s++)
		{
			if (i == 0 && s == 0)
			{
				arr2[0][0] = arr1[0][0];
			}
			if (i == 0 && s != 0)
			{
				arr2[i][s] = arr2[i][s - 1] + arr1[i][s];
			}
			if (s == 0 && i != 0)
			{
				arr2[i][s] = arr2[i - 1][s] + arr1[i][s];
			}
			else if (i != 0 && s != 0)
				arr2[i][s] = arr1[i][s] + arr2[i - 1][s] + arr2[i][s - 1] - arr2[i - 1][s - 1];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < m; s++)
		{
			cout << arr1[i][s] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < m; s++)
		{
			cout << arr2[i][s] << ' ';
		}
		cout << endl;
	}

}