package Alps0206;

import java.util.Scanner;

public class Codeup1024 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		String word;

		word = scan.next();

		String[] arr = word.split(""); // 한글자씩 나눠서 배열에 저장

		for (int i = 0; i < arr.length; i++)
			System.out.println("'" + arr[i] + "'");
	}
}