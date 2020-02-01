package Alps0206;

import java.util.Scanner;

public class Codeup1430 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int number[] = new int[10000001]; // 배열값 0으로 초기화
		int num1 = scan.nextInt();

		// 입력받은 것만 1로 바꿈
		for (int i = 0; i < num1; i++) {
			int a = scan.nextInt();
			number[a] = 1;
		}

		int num2 = scan.nextInt();

		// 입력받은 배열의 값만 출력
		for (int i = 0; i < num2; i++) {
			int a = scan.nextInt();
			System.out.print(number[a] + " ");
		}
	}
}