#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	int m;
	int num = 0;
	vector<int> array_n;
	vector<int> array_m;
	
	cin >>n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		array_n.push_back(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		array_m.push_back(num);
	}

	for (int i = 0; i < m; i++) {
		num = 0;
		for (int j = 0; j < n; j++) {
			if (array_n.at(j) == array_m.at(i)) {
				num++;
			}
		}
		if (num > 0) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}


	return 0;
}