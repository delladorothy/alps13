#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int* arr;
	int* arr_index;
	int n, i = 0, s = 0;
	cin >> n;
	arr = new int[n];
	arr_index = new int[n];

	for (i; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < n; i++)
	{
		arr_index[i] = arr[i];
	}
	sort(arr, arr + n);

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < n; s++)
		{
			if (arr_index[i] == arr[s])cout << s << ' ';
		}
	}
}