#include <stdio.h>
using namespace std;
int main(void) 
{
	int a, b, c;
	cout << "a입력: ";
	cin >> a;
	cout << "b입력: ";
	cin >> b;
	cout << "c입력: ";
	cin >> c;

	if (a + b <= c)										//삼각형의조건이 아닐경우
	{
		cout << "삼각형아님" << endl;
	}
	while (a + b > c)												//삼각형일경우
	{
		if (a == b && b == c)
		{
			cout << "정삼각형" << endl;
			break;
		}
		else if (a == b || b == c || c == a)
		{
			cout << "이등변삼각형" << endl;
			break;
		}
		else if (a * a + b * b == c * c)
		{
			cout << "직각삼각형" << endl;
			break;
		}
		else
		{
			cout << "삼각형" << endl;
			break;
		}
	}
}