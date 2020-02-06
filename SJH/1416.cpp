#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> array;
	int num;
	int i = 0;

	cin >> num;

	if (num == 0) {
		cout << "0";
		return 0;
	}

	while (num > 0)
	{
		array.push_back(num % 2);
		num = num / 2;
		i++;
	}

	for (int i = array.size() - 1; i >= 0; i--) {
		cout << array.at(i);
	}




	return 0;
}