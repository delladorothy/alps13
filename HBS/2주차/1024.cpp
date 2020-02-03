#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(void)
{
	char word[20];
	int index = 0;
	cin >> word;
	while (index != strlen(word))
	{
		printf("'%c'", word[index]);
		if (index != strlen(word) - 1)printf("\n");
		index++;
	}
}