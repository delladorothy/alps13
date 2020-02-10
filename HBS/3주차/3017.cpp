#include<iostream>
#include<algorithm>
using namespace std;
struct student
{
	int num;
	int math;
	int info;
};
bool compare(student a, student b)
{
	if (a.math > b.math)return true;
	else if (a.math < b.math)return false;

	else if (a.info > b.info)return true;
	else if (a.info < b.info)return false;
	else if (a.num < b.num)return true;
	else if (a.num > b.num)return false;
}

int main(void)
{
	student* s;
	int n;
	cin >> n;
	s = new student[n];
	for (int i = 0; i < n; i++)
	{
		s[i].num = i + 1;
		cin >> s[i].math >> s[i].info;
	}
	sort(s, s + n, compare);
	for (int i = 0; i < n; i++)
	{
		cout << s[i].num << ' ' << s[i].math << ' ' << s[i].info << endl;
	}
}