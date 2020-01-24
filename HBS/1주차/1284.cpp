#include <iostream>
using namespace std;

int main(void)
{
	int factor[100];									//소수인 인수를 담을 배열
	int factor_i = 0;									//소수배열이 어디까지 담겼는지
	int small, big;									//작은소수 큰소수
	int n;											//입력받을 변수
	int div;								//인수
	bool is_true = false;							//인수들의 곱이 n이되는지
	bool isfactor = true;							//인수가 소수인지

	cout << "n입력: ";
	cin >> n;

	for (div = 2; div < n; div++)						//factor에 인수이자 소수를 넣는다
	{
		for (int i = 2; i < div; i++)
		{
			if (div % i == 0)isfactor = false;
		}

		if (n % div == 0 && isfactor == true)
		{
			factor[factor_i] = div;
			factor_i++;
		}
		isfactor = true;
	}


	for (int i = 0; i < factor_i; i++)				// 인수이자 소수인 수 중에 곱이
	{												// n이되는지
		for (int s = i; s < factor_i; s++)
		{
			if (factor[i] * factor[s] == n)
			{
				is_true = true;
				if (factor[i] > factor[s])
				{
					small = factor[s];
					big = factor[i];
				}
				else
				{
					small = factor[i];
					big = factor[s];
				}
			}
		}
	}
	if (is_true == true)cout << small << "  " << big << endl;
	else cout << "no" << endl;
}