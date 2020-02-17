#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef struct schedule
{
	char name[99];
	int year;
	int month;
	int date;
}student;
bool compare(schedule a, schedule b)
{
	if (a.year > b.year)return false;
	else if (a.year < b.year)return true;
	else if (a.month > b.month)return false;
	else if (a.month < b.month)return true;
	for (int i = 0; i < 99; i++)
	{
		if (a.name[i] > b.name[i])return false;
		else if (a.name[i] < b.name[i])return true;
	}
}

int main(void)
{
	int n;
	cin >> n;
	schedule* sch = new student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> sch[i].name >> sch[i].year >> sch[i].month >> sch[i].date;
	}
	sort(sch, sch + n, compare);
	for (int i = 0; i < n; i++)
	{
		cout << sch[i].name << endl;
	}
}