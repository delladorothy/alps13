#include <iostream>
using namespace std;



int stairs(int n) {
	int array[100000] = { 0 };
	if (n==1) return 1;
	else if (n == 2) return 2;
	else if (n == 3) return 4;

	if (array[n] != 0) return array[n];
	else {
		array[n] =(stairs(n-1)+ stairs(n-2)+ stairs(n-3))%1000;
		return array[n];
	}
}



int main(void) {
	int n;

	cin >> n;

	cout << stairs(n) % 1000;

	return 0;

}