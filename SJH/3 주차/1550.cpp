#include <stdio.h>
#include <math.h>
#include<iostream>

long long int n;

int sqrt(long long int n) {
	int num = 0;
	for (int i = 0; i < n+2; i++) {
		if (n < i*i) {
			num = i - 1;
			break;
		}
		//std::cout << i<<" ";
	}
	return num;
}

/*int sqrt(long long int n) {
	int num = 0;
	num = sqrt((long long int)n);
	return num;
}*/

int main()
{
	std::cin >> n;
	printf("%d\n", sqrt(n));
	return 0;
}

//시간오류