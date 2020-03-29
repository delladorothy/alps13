package Alps0213;

import java.util.Arrays;
import java.util.Scanner;

public class Codeup3004 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr1[] = new int[num]; // 입력받을 배열
		int arr2[] = new int[num]; // 정렬 배열
		int index[] = new int[num]; // 인덱스 배열

		for (int i = 0; i < num; i++) {
			arr1[i] = scan.nextInt();
			arr2[i] = arr1[i];
		}

		Arrays.parallelSort(arr2); // 처리할 데이터가 많을 때 정렬

		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num; j++) {
				if (arr2[i] == arr1[j]) {
					index[j] = i; // 정렬한 데이터와 입력받은 배열이 같으면 인덱스 값 넣기
					break;
				}
			}
		}

		for (int i = 0; i < num; i++)
			System.out.print(index[i] + " ");
	}
}