#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	int arr_n[20], arr_m[20];
	bool hi = false;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr_n[i];
	cin >> m;
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