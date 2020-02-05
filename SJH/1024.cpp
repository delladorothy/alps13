#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char word[21];
	int k = 0;

	cin >> word;
	int num = strlen(word);
	char* word2 = strtok(word, "");
	
	while (word2 != NULL) {
		for (int i = 0; i <num; i++) {
			
				cout << "'" << word2[i] << "'" << endl;
		}
		word2 = strtok(NULL, "");
		
	}

	return 0;
}