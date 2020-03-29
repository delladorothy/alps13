package Alps0213;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Codeup4701 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		ArrayList<Long> arr = new ArrayList<Long>(); // 배열 생성
		int num = scan.nextInt();

		// 입력값 받기
		for (int i = 0; i < num; i++) {
			long num1 = scan.nextLong();
			arr.add(num1);
		}

		Collections.sort(arr); // 정렬

		long min = arr.get(0) + arr.get(arr.size() - 1); // 최솟값 설정
		long left = 0;
		long right = arr.size() - 1;
		long index1 = left;
		long index2 = right;

		while (left < right) {
			long sum = arr.get((int) left) + arr.get((int) right);
			if (Math.abs(sum) < Math.abs(min)) {
				index1 = left;
				index2 = right;
				min = sum;
			}

			// 값이 0보다 작으면 왼쪽이 작다는 뜻
			if (sum < 0)
				left++;
			else
				right--;
		}

		System.out.println(arr.get((int) index1) + " " + arr.get((int) index2));
	}
}