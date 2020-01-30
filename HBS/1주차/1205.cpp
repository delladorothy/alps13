#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int a, b;
	int max;
	int square;
	cout << "두수 입력: ";
	cin >> a >> b;
	max = a + b;
	if (max < b + a)max = b + a;
	if (max < a - b)max = a - b;
	if (max < b - a)max = b - a;
	if (max < a * b)max = a * b;
	if (max < b * a)max = b * a;
	if (max < a / b)max = a / b;
	if (max < b / a)max = b / a;
	square = 1;
	for (int i = 0; i < b; i++)
	{
		square *= a;
	}
	if (max < square)max = square;
	square = 1;
	for (int i = 0; i < a; i++)
	{
		square *= b;
	}
	if (max < square)max = square;
	printf("%.6f", (double)max);

}