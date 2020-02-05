#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char num1[100];
	char num2[100];
	int k = 0;

	cin >> num1 >> num2;

	if (strlen(num1) < strlen(num2)) {
		cout << num1 << " " << num2;
	}
	else if (strlen(num1) > strlen(num2)) {
		cout << num2 << " " << num1;
	}
	else if (strlen(num1) == strlen(num2)) {
		char* array1 = strtok(num1, "");
		char* array2 = strtok(num2, "");

		for (int i = 0; i < strlen(num1); i++) {
			if (array1[i] < array2[i]) {
				cout << num1 << " " << num2;
				return 0;
			}
			else if (array1[i] > array2[i]) {
				cout << num2 << " " << num1;
				return 0;
			}
		}
	}
	return 0;
}