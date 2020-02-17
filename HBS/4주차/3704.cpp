#include <iostream>
using namespace std;

int arr[100000];
int stair(int num)
{
	if (num == 0)return 0;
	else if (num == 1)return 1;
	else if (num == 2)return 2;
	else if (num == 3)return 4;
	if (arr[num] != 0)return arr[num] % 1000;
	else
	{
		arr[num] = stair(num - 1) + stair(num - 2) + stair(num - 3);
		return arr[num] % 1000;
	}
}

int main(void)
{
	int n;
	cin >> n;
	cout << stair(n);
}