#include <iostream>
using namespace std;
int main(void)
{
   int gametime;
   int class1;
   int class2 = 2;
   int seongik = 0;                        //성익이 투입후 득점수

   cout << "경기시간: ";
   cin >> gametime;
   cout << "1반의 득점상황: ";
   cin >> class1;

   while (gametime < 90)
   {
      seongik++;                           //성익이는 들어가자마자 골을 넣는다
      gametime += 5;                        //성익이는 5분마다 골을 넣는다;;
   }

   class1 += seongik;                        //1반의 득점상황+성익이가 넣은 골의 수
   cout << "1반의 득점수: " << class1 << endl;

}