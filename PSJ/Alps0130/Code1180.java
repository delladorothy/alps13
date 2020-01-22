package Alps0130;

import java.util.Scanner;

public class Code1180 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num; // 기존의 수
		int Fnum, Snum; // 십의 자리, 일의 자리
		int trash; // 휴지통

		System.out.print("숫자 입력 (1~99) : ");

		num = scan.nextInt();

		Fnum = num / 10;
		Snum = num % 10;

		// 십의 자리와 일의 자리 바꾸기
		int temp = Fnum;
		Fnum = Snum;
		Snum = temp;

		trash = (Fnum * 10 + Snum) * 2; // 휴지통 값

		// 100이 넘을 시 100의 자리는 버림
		if (trash >= 100)
			trash = trash % 100;

		System.out.println(trash);

		if (trash > 50)
			System.out.println("OH MY GOD");
		else
			System.out.println("GOOD");
	}
}