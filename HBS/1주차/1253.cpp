#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "a입력: ";
	cin >> a;
	cout << "b입력: ";
	cin >> b;
	if (a < b) {
		for (a; a <= b; a++)
		{
			cout << a << "  ";
		}
	}
	else
	{
		for (b; b <= a; b++)
		{
			cout << b << "  ";
		}
	}
}