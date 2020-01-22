package Alps0130;

import java.util.Scanner;

public class Code1205 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		double num1, num2, max = Integer.MIN_VALUE; // 가장 작은 값을 넣어놓음
		double arr[] = new double[7]; // 소수점 여섯째 자리까지 출력해야하므로 double로 선언

		System.out.print("두 수를 입력하세요 : ");

		num1 = scan.nextDouble();
		num2 = scan.nextDouble();

		arr[0] = num1 + num2; // 덧셈(바꿔서 더해도 동일)

		if (num1 > num2) // 뺄셈(두 개중의 큰 값만 배열에 저장)
			arr[1] = num1 - num2;
		else
			arr[1] = num2 - num1;

		arr[2] = num1 * num2; // 곱셈(바꿔서 곱해도 동일)
		arr[3] = num1 / num2; // 나눗셈
		arr[4] = num2 / num1;
		arr[5] = Math.pow(num1, num2); // 거듭제곱
		arr[6] = Math.pow(num2, num1);

		// 최댓값 구하기
		for (int i = 0; i < arr.length; i++) {
			if (max < arr[i])
				max = arr[i];
		}

		System.out.printf("%.6f", max); // 최댓값 여섯째자리까지 출력
	}
}