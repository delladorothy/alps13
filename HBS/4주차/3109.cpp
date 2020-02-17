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
	int num_n;
}student;

bool compare(student a, student b)
{
	if (a.check > b.check)return false;
	else if (a.check < b.check)return true;
	else if (a.num > b.num)return false;
	else if (a.num < b.num)return true;
	else if (a.num_n > b.num_n)return true;
	else if (a.num_n < b.num_n)return false;
}
int main(void)
{
	int n;
	int arr[5];
	cin >> n;
	student* s = new student[n + 1];
	s[0].check = 3;
	for (int i = 1; i < n + 1; i++)
	{
		cin >> s[i].code >> s[i].num >> s[i].name;
		s[i].num_n = 1;
		if (s[i].code == 'D')s[i].check = 2;
		else s[i].check = 1;
	}
	for (int i = 1; i < n + 1; i++)
	{
		if (s[i].code == 'D')
		{
			for (int k = i; k >= 1; k--)
			{
				if (s[k].num == s[i].num && s[k].code == 'I' && s[k].check == 1)
				{
					s[k].check = 2;
					break;
				}
			}
		}
		else if (s[i].code == 'I')
		{
			for (int k = i; k >= 1; k--)
			{
				if (s[k].num == s[i].num && s[k].code == 'I' && s[k].check == 1)
				{
					s[i].num_n++;
				}
			}
		}
	}
	sort(s + 1, s + n + 1, compare);
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << s[arr[i]].num << ' ' << s[arr[i]].name << endl;
	}
}