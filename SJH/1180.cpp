#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b;
	int c;
	int num;


	cin >> a;
	b = a / 10;
	c = a % 10;
	num = ((c * 10 + b) * 2) % 100;
	if (num <= 50) {
		cout << num << '\n' << "GOOD";
	}
	else {
		cout << num << '\n' << "OH MY GOD";
	}



	return 0;
}