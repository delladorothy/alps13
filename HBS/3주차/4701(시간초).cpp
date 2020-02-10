#include <iostream>
using namespace std;

void change(int& a)
{
	if (a < 0)a = -a;
}

int main(void)
{
	int n, min, temp, min_i = 0, min_s = 1;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	min = arr[min_i] + arr[min_s];
	change(min);
	for (int i = 0; i < n - 1; i++)
	{
		for (int s = i + 1; s < n; s++)
		{
			temp = arr[i] + arr[s];
			change(temp);
			if (min > temp)
			{
				min_i = i;
				min_s = s;
				min = temp;
			}
		}
	}
	cout << arr[min_i] << ' ' << arr[min_s];
	delete[]arr;
}