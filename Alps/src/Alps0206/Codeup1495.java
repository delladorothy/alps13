package Alps0206;

import java.util.Scanner;

public class Codeup1495 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		// 문제조건이 이상한거 같음(실행 중 에러 발생)
		int row = scan.nextInt();
		int col = scan.nextInt();
		int num = scan.nextInt();
		int arr[][] = new int[row][col];

		for (int i = 0; i < num; i++) {
			int x1, y1, x2, y2, u;
			x1 = scan.nextInt();
			y1 = scan.nextInt();
			x2 = scan.nextInt();
			y2 = scan.nextInt();
			u = scan.nextInt();

			arr[x1][y1] += u;
			arr[x2 + 1][y2 + 1] += u;
			arr[x1][y2 + 1] -= u;
			arr[x2 + 1][y1] -= u;
		}

		// 기존 배열 출력
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++)
				System.out.print(arr[i][j] + " ");
			System.out.println();
		}

		System.out.println();

		// 누적 배열 출력
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (i == 0 && j == 0) // 맨위쪽이나 맨왼쪽에 있을 경우
					arr[i][j] = arr[i][j];
				else if (i == 0) // 맨위쪽의 경우
					arr[i][j] = arr[i][j - 1] + arr[i][j];
				else if (j == 0) // 맨왼쪽의 경우
					arr[i][j] = arr[i - 1][j] + arr[i][j];
				else
					arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + arr[i][j];
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}
}