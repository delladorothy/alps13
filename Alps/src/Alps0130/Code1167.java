package Alps0130;

import java.util.Scanner;

public class Code1167 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num; // 배열을 만들 수
		int[] arr; // 값을 넣을 배열

		num = scan.nextInt();

		arr = new int[num];

		for (int i = 0; i < arr.length; i++) {
			arr[i] = scan.nextInt();
		}

		// 내림차순 정렬
		for (int i = 0; i < arr.length - 1; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] < arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		System.out.println(arr[1]); // 두번 째로 큰 값 출력
	}
}