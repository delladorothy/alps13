#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char num1[100];
	char num2[100];
	int len1, len2;
	cin >> num1 >> num2;
	len1 = strlen(num1);
	len2 = strlen(num2);
	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (num1[i] == num2[i])continue;
			else if (num1[i] > num2[i])
			{
				cout << num2 << ' ' << num1;
				break;
			}
			else
			{
				cout << num1 << ' ' << num2;
				break;
			}
		}
	}
	else
	{
		if (len1 > len2)cout << num2 << ' ' << num1;
		if (len2 > len1)cout << num1 << ' ' << num2;
	}
}