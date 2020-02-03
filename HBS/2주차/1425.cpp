#include <iostream>
using namespace std;

int main(void)
{
	int first_line, num;
	int temp;
	int arr[100];
	cin >> num >> first_line;
	for (int i = 0; i < num; i++)cin >> arr[i];

	for (int i = 0; i < num - 1; i++)
	{
		for (int s = 0; s < num - 1 - i; s++)
			if (arr[s] > arr[s + 1])
			{
				temp = arr[s];
				arr[s] = arr[s + 1];
				arr[s + 1] = temp;
			}
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << ' ';
		if ((i + 1) % first_line == 0)cout << endl;
	}
}