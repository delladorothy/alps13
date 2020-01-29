#include <iostream>
using namespace std;

int main()
{
	int a = 75;	//a는 입력시간
	int b = 2;	//b는 입력득점
	int c = 0;	//c는 출력득점

	cin >> a;
	cin >> b;

	if (a % 5 == 0) {
		c = (90 - a) / 5 + b;
	}
	else {
		c = (90 - a) / 5 + b + 1;
	}
	cout << c;

	return 0;
}
