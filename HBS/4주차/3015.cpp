#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef struct student
{
	string name;
	int score;
	int num;
}student;
bool compare(student a, student b)
{
	if (a.score > b.score)return true;
	else if (a.score < b.score)return false;
	else if (a.num > b.num)return false;
	else if (a.num < b.num)return true;
}

int main(void)
{
	int n, m;
	cin >> n >> m;
	student* person = new student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> person[i].name >> person[i].score;
		person[i].num = i;
	}
	sort(person, person + n, compare);
	for (int i = 0; i < m; i++)
	{
		cout << person[i].name << endl;
	}
}