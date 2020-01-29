#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int num = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	if (a + b > c) {
		if (b + c > a) {
			if (a + c > b) {
				num++;
			}
		}
	}

	if (num == 1) {
		cout << "yes";
	}
	else {
		cout << "no";
	}



	return 0;
}