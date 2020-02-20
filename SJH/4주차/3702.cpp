#include <iostream>
using namespace std;



int pascal(int r, int c) {
	int array[50][50] = { 0 };
	if (r == 1) return 1;
	else if (c ==1) return 1;

	if (array[r][c] != 0) return array[r][c];
	else {
		array[r][c]=(pascal(r, c - 1) + pascal(r - 1, c)) % 100000000;
		return array[r][c];
	}
}



int main(void) {
	int r,c;

	cin >> r >>c;
	
	cout << pascal(r, c)% 100000000;

	return 0;

}