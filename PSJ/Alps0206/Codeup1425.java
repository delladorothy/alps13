package Alps0206;

import java.util.Scanner;

public class Codeup1425 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int students = scan.nextInt(); // 학생 수
		int table = scan.nextInt(); // 테이블 수
		int height[] = new int[students]; // 키

		for (int i = 0; i < height.length; i++)
			height[i] = scan.nextInt();

		// 오름차순 정렬
		for (int i = 0; i < height.length - 1; i++) {
			for (int j = i + 1; j < height.length; j++) {
				if (height[i] > height[j]) {
					int temp = height[i];
					height[i] = height[j];
					height[j] = temp;
				}
			}
		}

		// 출력
		for (int i = 0; i < height.length; i++) {
			if (i >= table && i % table == 0) // 그 다음 테이블로 넘어갈 때
				System.out.println();
			System.out.print(height[i] + " ");
		}

	}
}