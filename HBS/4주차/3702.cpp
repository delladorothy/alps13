#include <iostream>
using namespace std;

int arr[50][50];
int pascal(int r, int c)
{
	if (r == 0)return 1;
	else if (c == 0)return 1;
	if (arr[r][c] != 0)return arr[r][c] % 100000000;
	else
	{
		arr[r][c] = pascal(r - 1, c) % 100000000 + pascal(r, c - 1) % 100000000;
		return arr[r][c] % 100000000;
	}
}

int main(void)
{
	int r, c;
	cin >> r >> c;
	cout << pascal(r - 1, c - 1);
}