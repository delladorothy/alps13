package Alps0213;

import java.math.BigDecimal;
import java.util.Scanner;

public class Codeup1550 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		BigDecimal num2 = scan.nextBigDecimal();

		System.out.println(sqrt3(num2));
	}

	// 루트 함수
	public static void sqrt2(long num) {
		System.out.println((long) Math.sqrt(num));
	}

	// 두번째 루트 함수
	public static long sqrt3(BigDecimal num) {

		for (int i = 0; i <= num.longValue() + 1; i++) {
			if (i * i > num.longValue())
				return i - 1;
		}
		return 0;
	}
}