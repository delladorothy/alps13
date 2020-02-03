package Alps0206;

import java.util.Scanner;

public class Codeup1416 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int num;
		
		num = scan.nextInt();
		
		String a = Integer.toBinaryString(num); // 2진법으로 바꾸기
		
		System.out.println(a);
	}
}