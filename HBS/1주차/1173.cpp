#include <iostream>
using namespace std;

int main(void) 
{
	int time=24;
	int minute=60;

	cout << "time < 24 &&minute < 60" << endl;
	while (time >= 24 || minute >= 60)								//time,minute이 범위 밖의 값을 입력시 반복
	{
		cin >> time;
		cin >> minute;
		if (time >= 24 || minute >= 60) 
		{
			cout << "time < 24 &&minute < 60" << endl;
			cout << "다시입력: ";
		}
	}
	if (minute < 30)												//minute이 30보다작을경우 시간값이 바뀐다.
	{
		if (time == 0)												//time이 0일경우 23으로 바뀐다.
		{
			time = 23;
		}
		else 
		{
			time -= 1;
			minute = 60 - (30 - minute);
		}
	}
	else 
	{
		minute -= 30;
	}

	cout << time << " " << minute << endl;
}