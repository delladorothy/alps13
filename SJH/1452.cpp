#include<iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	int array[100001];
	int temp;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	sort(array, array + n+1);

	for (int i = 1; i <= n; i++)
		cout << array[i] << endl;

	return 0;
}