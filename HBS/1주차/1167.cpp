#include <iostream>
using namespace std;

int main(void) 
{
	int num[3];
	int min;
	int min_i;
	int second;
	for (int i = 0; i < 3; i++)								//세개의 정수 입력
	{
		cout <<  << " 번째 정수입력: ";
		cin >> num[i];
	}
	cout << endl;

	min = num[0];
	for (int i = 0; i < 3;i++)								//최솟값이 들어간 인덱스값 구하기
	{
		if (min > num[i]) 
		{
			min = num[i];
			min_i = i;
		}
	}
	if (min_i == 0)											//최솟값이 배열의 처음에 저장되어 있을경우
	{															//second는 두번째 인덱스부터 저장한ㄷㅏ.
		second = num[1];
	}
	else 
	{
		second = num[0];
	}

	for (int i = 0; i < 3; i++)								//두번째 최솟값 구하기
	{
		if (num[i] == min)									//최솟값이 나올경우 반복문을 그냥 건너뛴다.
		{
			continue;
		}
		if (second > num[i]) 
		{
			second = num[i];
		}
	}
	cout << "두번째로 큰수는 " << second << " 입니다." << endl;
}
