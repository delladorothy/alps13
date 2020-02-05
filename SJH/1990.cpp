#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char num[500];
	int add = 0;

	cin >> num;
	char* array = strtok(num, "");
	
	for (int i = 0; i < strlen(num); i++) {
		add = add + array[i];
	}

	if (add % 3 == 0) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	return 0;
}