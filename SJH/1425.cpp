#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int man;
	int line;
	int array[100];

	cin >> man >> line;

	for (int i = 0; i < man; i++) {
		cin >> array[i];
	}

	sort(array, array + man);

	for (int i = 0; i < man; i++) {
		if (i%line == 0 && i>0) {
			cout << '\n';
		}
		cout << array[i] << " ";
	}


	return 0;
}