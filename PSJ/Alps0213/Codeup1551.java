package Alps0213;

import java.util.Scanner;

public class Codeup1551 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr[] = new int[num];

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		int find = scan.nextInt();

		System.out.println(Find(arr, find));
	}

	public static int Find(int arr[], int find) {

		// 배열에 찾는값이 동일하면 그 위치 출력
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == find)
				return i + 1;
		}
		return -1;
	}
}