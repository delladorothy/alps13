#include <iostream>
using namespace std;

int arr[200];
int pibo(int num)
{
	if (num == 1)return 1;
	else if (num == 2)return 1;
	if (arr[num] != 0)return arr[num] % 10009;
	else
	{
		arr[num] = pibo(num - 1) % 10009 + pibo(num - 2) % 10009;
		return arr[num] % 10009;
	}
}

int main(void)
{
	int num;
	cin >> num;
	cout << pibo(num);
}