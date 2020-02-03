#include <iostream>
using namespace std;

int length(int num)
{
	if (num > 1)return 1 + length(num / 2);
	else return 1;
}
int main(void)
{

	int len;
	int num;
	int i = 0;
	cin >> num;
	len = length(num);
	int* ar = new int[len];
	if (num == 0)cout << 0;
	else
	{
		while (num > 0)
		{
			ar[i] = num % 2;
			num /= 2;
			i++;
		}
		for (int s = len - 1; s >= 0; s--)
		{
			cout << ar[s];
		}
	}
}
