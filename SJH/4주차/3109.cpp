#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

struct Str {
	int check;
	int num;
	char code[2];
	char name[100];

};

bool desc(const Str &a, const Str&b) {
	if (a.check > b.check)return false;
	else if (a.check < b.check)return true;
	else if (a.num > b.num)return false;
	else if (a.num < b.num)return true;

	return false;
}


int main() {
	int n;
	char check2[2] = "D";
	struct Str schedule[2001];
	int a[5];
	cin >> n;
	for (int i = 1; i <=n; i++) {
		cin >> schedule[n-i].code >> schedule[n - i].num >> schedule[n - i].name;
		schedule[n - i].check = 0;
	}
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (!strcmp(schedule[i].code, check2)) {
			schedule[i].check = 1;
			for (int j = 0; j < n; j++) {
				if (schedule[i].num == schedule[j].num && strcmp(schedule[j].code, check2)) {
					schedule[j].check = 1;
					break;
				}
			}
		}
	}


	sort(schedule, schedule + n, desc);

	for (int i = 0; i < n; i++) {
		cout << schedule[i].num << " " << schedule[i].name << endl;
	}

	return 0;
}