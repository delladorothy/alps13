#include <iostream>
using namespace std;

void swap(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
int main(void)
{
	int n, temp, temp_i;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		temp_i = i;
		for (int s = i + 1; s < n; s++)
		{
			if (arr[temp_i] > arr[s])temp_i = s;
		}
		swap(arr[temp_i], arr[i]);
		cout << arr[i] << endl;
	}
}