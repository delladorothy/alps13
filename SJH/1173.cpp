#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int h;
	int m;

	cin >> a;
	cin >> b;

	if (b >= 30) {
		h = a;
		m = b - 30;
	}
	else if(b<30){
		if (a == 0) {
			h = 23;
			m = 60 - (30 - b);
		}
		else {
			h = a-1;
			m = 60 - (30 - b);
		}
	}

	cout << h << " " << m;


	return 0;
}