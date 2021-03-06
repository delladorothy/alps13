package Alps0130;

import java.util.ArrayList;
import java.util.Scanner;

public class Code1284 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		ArrayList<Integer> primeNum = new ArrayList<>(); // 가변적인 ArrayList 사용

		System.out.print("숫자 한 개를 입력하시오 : ");

		int num1 = scan.nextInt();

		// 소인수분해
		while (true) {
			for (int i = 2; i <= num1; i++) {
				System.out.println(i);
				if (num1 % i == 0) {
					primeNum.add(i); // ArrayList에 추가
					num1 /= i;
					i = 1; // i = 2로 초기화
				}
			}

			if (num1 == 1)
				break;
		}

		if (primeNum.size() == 2)
			System.out.println(primeNum.get(0) + " " + primeNum.get(1));
		else
			System.out.println("wrong number");
	}
}