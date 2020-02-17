#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int num;
	int k;
	vector<int> array1;
	vector<int> array2;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> k;
		array1.push_back(k);
		array2.push_back(k);
	}

	sort(array2.begin(), array2.end());
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (array1.at(i) == array2.at(j)) {
				cout << j << " ";
				break;
			}
		}
		
	}



	return 0;
}