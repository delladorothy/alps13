package Alps0213;

import java.util.Scanner;

public class Codeup1535 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr[] = new int[num];

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		System.out.println(Max(arr));
	}

	// 최댓값의 위치 출력하는 함수
	public static int Max(int arr[]) {

		int max = arr[0]; // 최댓값
		int index = 1; // 위치값

		for (int i = 1; i < arr.length; i++) {
			if (max < arr[i]) {
				max = arr[i];
				index = i + 1; // 위치 + 1
			}
		}
		return index;
	}
}
