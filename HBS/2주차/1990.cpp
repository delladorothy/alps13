#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char num[500];
	cin >> num;
	int len = strlen(num);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += (int)num[i];
	}
	if (sum % 3 == 0)cout << "1";
	else cout << "0";
}