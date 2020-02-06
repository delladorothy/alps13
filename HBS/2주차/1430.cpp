#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	int* arr_n, int* arr_m;
	bool hi = false;
	cin >> n;
	arr_n = new int[n];
	for (int i = 0; i < n; i++)cin >> arr_n[i];
	cin >> m;
	arr_m = new int[m];
	for (int i = 0; i < m; i++)cin >> arr_m[i];

	for (int i = 0; i < m; i++)
	{
		for (int s = 0; s < n; s++)
		{
			if (arr_n[s] == arr_m[i])
			{
				cout << "1 ";
				hi = true;
				break;
			}

		}
		if (hi == false)cout << "0 ";
		hi = false;
	}
}