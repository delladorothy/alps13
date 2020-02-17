#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool desc(pair<int, int> a, pair<int, int> b) {
	return a > b;
}

int main() {
	int num;
	int a,b;
	vector<pair<int, int>> array;

	cin >> num;

	for (int i = 0; i < num; i++) {
			cin >> a >> b;
			array.push_back(pair<int, int>(a, b));

	}

	sort(array.begin(), array.end(), desc);

	for (int i = 0; i < num; i++) {
		cout << i+1<< " "<< array[i].first << " " << array[i].second << endl;
	}

	return 0;
}