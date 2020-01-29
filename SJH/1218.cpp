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
		if (a == b && b == c) {
			num = 1;
		}
		else if (a == b && b != c) {
			num = 2;
		}
		else if (c == b && b != a) {
			num = 2;
		}
		else if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
			num = 3;
		}
		else {
			num = 4;
		}
	}
	else {
		num = 0;
	}


	if (num == 0) {
		cout << "»ï°¢Çü¾Æ´Ô";
	}
	else if(num==1){
		cout << "Á¤»ï°¢Çü";
	}
	else if (num == 2) {
		cout << "ÀÌµîº¯»ï°¢Çü";
	}
	else if (num == 3) {
		cout << "Á÷°¢»ï°¢Çü";
	}
	else if (num == 4) {
		cout << "»ï°¢Çü";
	}



	return 0;
}