#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

struct Str {
	int num;
	char wo[100];
};



int main() {
	int n, m;
	struct Str word1[100000];
	struct Str word2[100000];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> word1[i].wo >> word1[i].num;
	}
	for (int i = 0; i < m; i++) {
		cin >> word2[i].wo;
		word2[i].num = 0;
		for (int j = 0; j < n; j++) {
			if (!strcmp(word2[i].wo, word1[j].wo)) {
				word2[i].num = word2[i].num + word1[j].num;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		
		cout << word2[i].num << endl;
	}

	return 0;
}
