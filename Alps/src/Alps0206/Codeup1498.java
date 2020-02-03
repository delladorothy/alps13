package Alps0206;

import java.util.Scanner;

public class Codeup1498 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arrNum = scan.nextInt(); // 배열 길이
		int cut = scan.nextInt();	 // 자르는 곳
		int arr[] = new int[arrNum]; // 배열 생성

		for (int i = 0; i < arr.length; i++)
			arr[i] = scan.nextInt();

		for (int i = 0; i < arr.length; i += cut) {
			int min = arr[i]; // 최솟값
			for (int j = 0; j < cut; j++) { // 자르는 곳까지 반복
				if (i + j >= arr.length) // 배열의 길이 넘어가면 중단
					break;
				if (min > arr[i + j]) // 최솟값 구하기
					min = arr[i + j];
			}
			System.out.print(min + " ");
		}
	}
}