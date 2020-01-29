#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a;
	int big;
	int small;
	int num=0;

	cin >> a;

	for (int i = 2; i < a; i++) {
		if (a%i == 0) {
			num++;
			if (num ==1) {
				small = i;
			}
			else if (num == 2) {
				big = i;
			}
		}
		if (num == 3) {
			break;
		}
	}

	if (num == 2) {
		if (pow(small, 2) == big) {
			cout << "wrong number";
		}
		else {
			cout << small << " " << big;
		}
	}
	else {
		cout << "wrong number";
	}


	return 0;
}