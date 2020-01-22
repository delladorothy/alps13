package Alps0130;

import java.util.Scanner;

public class Code1165 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);

		int time1, time2, goal; // 현재 경기시간, 남은 시간, 현재 득점
		int totalgoal; // 총 득점

		System.out.print("현재 경기시간과 우리팀의 득점을 입력하시요 : ");

		time1 = scan.nextInt();
		goal = scan.nextInt();

		time2 = 90 - time1; // 남은 시간 계산

		if (time2 % 5 == 0)
			totalgoal = goal + time2 / 5;
		else
			totalgoal = goal + time2 / 5 + 1;

		System.out.println(totalgoal);
	}
}