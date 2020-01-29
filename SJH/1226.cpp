#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[7] = {0,0,0,0,0,0,0};
	int b[6];
	double num=0;
	int bo = 0;

	for (int i = 0; i < 7;i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 6; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (a[i] == b[j]) {
				num++;
			}
			if (a[6] == b[j]) {
				bo = 1;
			}
		}
	}
	
	if (num == 6) {
		cout << 1;
	}
	else if (num == 5) {
		if (bo == 1) {
			cout << 2;
		}
		else {
			cout << 3;
		}
	}
	else if (num == 4) {
		cout << 4;
	}
	else if (num == 3) {
		cout << 5;
	}
	else if (num == 2) {
		cout << 0;
	}
	else if (num == 1) {
		cout << 0;
	}
	else if (num == 0) {
		cout << 0;
	}



	return 0;
}