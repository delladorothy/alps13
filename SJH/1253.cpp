#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	int b;
	int num = 0;

	cin >> a;
	cin >> b;

	if (a > b) {
		for (int i = 0; i < a - b + 1; i++) {
			num = b + i;
			cout << num << " ";
		}
	}
	else if (a < b) {
		for (int i = 0; i < b - a + 1; i++) {
			num = a + i;
			cout << num << " ";
		}
	}
	else if (a == b) {
		cout << a;
	}


	return 0;
}