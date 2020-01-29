#include <iostream>
using namespace std;

int main()
{
	int a = 0;	
	int b = 0;	
	int c = 0;
	int k = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	if (a >= b && b > c) {
		k = b;
	}
	else if (c >= b && b > a) {
		k = b;
	}
	else if (a >= c && c > b) {
		k = c;
	}
	else if (b >= c && c > a) {
		k = c;
	}
	else if (c >= a && a > b) {
		k = a;
	}
	else if (b >= a && a > c) {
		k = a;
	}
	else if (a == b && b == c) {
		k = a;
	}
	else if (a == b && a < c) {
		k = a;
	}
	else if (a == c && a < b) {
		k = a;
	}
	else if (c == b && c < a) {
		k = c;
	}

	cout << k;

	return 0;
}