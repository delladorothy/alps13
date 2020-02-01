package Alps0206;

import java.util.Scanner;

public class Codeup1441 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int temp;
		int num = scan.nextInt();
		int arr[] = new int[num];

		for (int i = 0; i < arr.length; i++)
			arr[i] = scan.nextInt();

		// 버블 정렬
		for (int i = 0; i < arr.length; i++) {
			for (int j = 0; j < arr.length - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]);
		}
	}
}