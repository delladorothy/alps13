package Alps0206;

import java.util.Scanner;

public class Codeup1452 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr[] = new int[num];

		for (int i = 0; i < arr.length; i++)
			arr[i] = scan.nextInt();
		
		mergeSort(arr); // 병합정렬 실행
		
		for (int i = 0; i < arr.length; i++)
			System.out.println(arr[i]);
	}

	// 병합 정렬
	private static void mergeSort(int[] arr) {
		int[] tmp = new int[arr.length];
		mergeSort(arr, tmp, 0, arr.length - 1);
	}

	private static void mergeSort(int[] arr, int[] tmp, int start, int end) {
		// 최소한으로 분할 후 정렬
		if (start < end) {
			int mid = (start + end) / 2;
			mergeSort(arr, tmp, start, mid);
			mergeSort(arr, tmp, mid + 1, end);
			merge(arr, tmp, start, mid, end); // 정렬
		}
	}

	private static void merge(int[] arr, int[] tmp, int start, int mid, int end) {
		for (int i = start; i <= end; i++)
			tmp[i] = arr[i];

		int left = start;
		int right = mid + 1;
		int index = start;
		
		while (left <= mid && right <= end) {
			// 배열에 작은 수부터 넣기
			if (tmp[left] <= tmp[right]) { // 왼쪽이 더 작을 때
				arr[index] = tmp[left];
				left++;
			}

			else {
				arr[index] = tmp[right]; // 오른쪽이 더 작을 때
				right++;
			}
			index++;
		}
		
		// 왼쪽 부분이 남았을 때
		if(left > mid){
			for(int i = right; i<=end; i++, index++)
				arr[index] = tmp[i];
		}
		
		// 오른쪽 부분이 남았을 때
		else
			for(int i = left; i<=mid; i++, index++)
				arr[index] = tmp[i];
	}
}