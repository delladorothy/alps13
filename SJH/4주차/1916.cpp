#include <iostream>
using namespace std;



int fibo(int num);



int main(void) {
	int n;

	cin >> n;

	cout << fibo(n)%10009;

	return 0;
}

int fibo(int n) {

	int mem[200] = { 0 };
	if (n == 0) return mem[0] = 0;
	else if (n == 1) return mem[1] = 1;
	if (mem[n] > 0) return mem[n]%10009;

	return mem[n] = fibo(n - 1)%10009 + fibo(n - 2)%10009;
}
