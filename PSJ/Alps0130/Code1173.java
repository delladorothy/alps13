package Alps0130;

import java.util.Scanner;

public class Code1173 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int hour, min; // 시간, 분

		System.out.print("시간과 분 입력 : ");

		hour = scan.nextInt();
		min = scan.nextInt();

		if (min < 30) {
			min = min + 30;
			if (hour == 0)
				hour = 23;
			else
				hour = hour - 1;
		} else
			min = min - 30;

		System.out.println(hour + " " + min);
	}
}