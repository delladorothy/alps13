#include <iostream>
using namespace std;

int main(void) 
{
	int line[3];
	int max_index,max;
	int sum = 0;
	for (int i = 0; i < 3; i++) 
	{
		cout << "변입력: ";
		cin >> line[i];
	}
	max = line[0];
	for (int i = 1; i < 3; i++)					//최대값을 찾는다
	{
		if (max < line[i])
		{
			max = line[i];
			max_index = i;
		}
	}
	for (int i = 0; i < 3; i++)					//최대값을제외한 값들의 합을 구한다.
	{
		if (i != max_index)sum += line[i];
	}
	if (sum > max)cout << "yes" << endl;
	else cout << "no" << endl;
}