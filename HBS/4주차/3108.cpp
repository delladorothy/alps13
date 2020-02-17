#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef struct student
{
	char code;
	int num;
	string name;
	int check;
}student;

bool compare(student a, student b)
{
	if (a.check > b.check)return false;
	else if (a.check < b.check)return true;
	else if (a.num > b.num)return false;
	else if (a.num < b.num)return true;
}
int main(void)
{
	int n, d = 0;
	int arr[5];
	cin >> n;
	student* s = new student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].code >> s[i].num >> s[i].name;
		if (s[i].code == 'D')s[i].check = 2;
		else s[i].check = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i].code == 'D')
		{
			for (int k = 0; k < i; k++)
			{
				if (s[k].num == s[i].num)
				{
					s[k].check = 2;
				}
			}
		}
		else if (s[i].code == 'I')
		{
			for (int t = 0; t < i; t++)
			{
				if (s[t].num == s[i].num && s[t].check == 1)s[i].check = 2;
			}
		}
	}
	sort(s, s + n, compare);
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		cout << s[arr[i] - 1].num << ' ' << s[arr[i] - 1].name << endl;
	}
}