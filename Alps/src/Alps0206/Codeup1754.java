package Alps0206;

import java.math.BigDecimal;
import java.util.Scanner;

public class Codeup1754 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		BigDecimal num1, num2; // 큰 정수 비교할 때 사용

		num1 = scan.nextBigDecimal();
		num2 = scan.nextBigDecimal();

		// 정수 비교
		if (num1.compareTo(num2) > 0)
			System.out.println(num2 + " " + num1);
		else
			System.out.println(num1 + " " + num2);
	}
}