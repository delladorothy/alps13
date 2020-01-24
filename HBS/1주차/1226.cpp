#include <iostream>
using namespace std;

int main(void)
{
	int lotto[7];
	int mylotto[6];
	int num = 0;									//맞은갯수 저장
	bool bonus = false;								//맞은갯수가 6개일경우 보너스맞춘건지 아니면 그냥 다맞춘건지 판단
	for (int i = 0; i < 7; i++)
	{
		cin >> lotto[i];
	}
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> mylotto[i];
	}

	for (int m = 0; m < 6; m++)							//내로또번호랑 로또번호랑 비교
	{
		for (int l = 0; l < 6; l++)
		{
			if (lotto[l] == mylotto[m])				//번호가 같을 경우
			{
				num++;								//개수를 +1해주고
				break;
			}
		}

		if (mylotto[m] == lotto[6])
		{
			num++;									//보너스번호랑 내번호랑 같을경우도 개수+1
			bonus = true;							//보너스번호와 같을 경우!
		}

	}

	switch (num)
	{
	case 0:
		cout << "꽝" << endl;
		break;
	case 1:
		cout << "꽝" << endl;
		break;
	case 2:
		cout << "꽝" << endl;
		break;
	case 3:
		cout << "5등" << endl;
		break;
	case 4:
		cout << "4등" << endl;
		break;
	case 5:
		cout << "3등" << endl;
		break;
	case 6:
		if (bonus == true)
		{
			cout << "2등" << endl;
		}
		else
		{
			cout << "1등" << endl;
		}
	}
}