#include <iostream>
#include <algorithm>
using namespace std;

void change(int& a)
{
	if (a < 0)a = -a;
}

int main(void)
{
	int n, min = 0, temp;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int start = 0, last = n - 1;
	int s = 0, l = n - 1;
	min = arr[start] + arr[last];
	while (start < last)
	{
		temp = arr[start] + arr[last];
		change(temp);
		change(min);
		if (min > temp)
		{
			min = temp;
			s = start;
			l = last;
		}
		if (arr[start] + arr[last] > 0)
		{
			last--;

		}
		else if (arr[start] + arr[last] < 0)
		{
			start++;
		}
		else
		{
			s = start;
			l = last;
			break;
		}
	}
	cout << arr[s] << ' ' << arr[l];
	delete[]arr;
}