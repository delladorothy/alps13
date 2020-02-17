#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int main() {
	int num;
	int a;
	vector<int> array1;
	vector<tuple<int, int, int>>array2;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a ;
		array1.push_back(a);
	}
	
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			array2.push_back(tuple<int, int, int>(abs(array1.at(i)+array1.at(j)),  array1.at(i), array1.at(j)));

		}
	}

	sort(array2.begin(), array2.end());

	if (get<1>(array2[0]) < get<2>(array2[0])) {
		cout << get<1>(array2[0]) << " " << get<2>(array2[0]) << endl;
	}
	else {
		cout << get<2>(array2[0]) << " " << get<1>(array2[0]) << endl;
	}

	return 0;
}