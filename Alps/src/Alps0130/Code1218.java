package Alps0130;

import java.util.Scanner;

public class Code1218 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arr[] = new int[3];

		System.out.print("세 변의 길이 입력 : ");

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

		// 삼각형이 될 수 있을 때
		if (arr[0] < arr[1] + arr[2]) {
			if (arr[0] == arr[1] && arr[1] == arr[2])
				System.out.println("정삼각형");
			else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0])
				System.out.println("이등변삼각형");
			else if (Math.pow(arr[0], 2) == Math.pow(arr[1], 2) + Math.pow(arr[2], 2))
				System.out.println("직각삼각형");
			else
				System.out.println("삼각형");
		} else
			System.out.println("삼각형 아님");
	}
}