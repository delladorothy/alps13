#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double a = 0;
	double b = 0;
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double num4 = 0;

	cin >> a;
	cin >> b;
	cout << fixed;
	cout.precision(6);

	if (a + b >= a * b) {
		num1 = a + b;
	}
	else {
		num1 = a * b;
	}

	if (pow(a, b) >= pow(b, a)) {
		num2 = pow(a, b);
	}
	else {
		num2 = pow(b, a);
	}

	if (a-b >= b-a) {
		num3 = a-b;
	}
	else {
		num3 = b-a;
	}

	if (a/b >= b/a) {
		num4 = a/b;
	}
	else {
		num4 = b/a;
	}

	if (num1 <= num2) {
		num1 = num2;
	}

	if (num3 <= num4) {

		num3 = num4;
	}

	if (num1 <= num3) {
		num1 = num3;
	}
	else {
		num1 = num1;
	}

	cout << num1;


	return 0;
}