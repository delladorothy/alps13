package Alps0213;

import java.util.Scanner;

public class Codeup1555 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		long num = scan.nextInt();
		System.out.println(Sum(num));
	}

	public static long Sum(long num) {

		long sum = 0;

		// 합계 구하기
		for (long i = 0; i <= num; i++)
			sum += i;
		return sum;
	}
}