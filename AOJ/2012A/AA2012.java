import java.util.*;
class AA2012{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int j = 0; j < n; j++) {
			int y = sc.nextInt(), m = sc.nextInt(), d = sc.nextInt();
			int result = 0; // 1/1/1から与えられた暦までの日数
			for (int i = 1; i < y; i++) { //年を換算
				result += i%3==0? 200:195;
			}
			if (y % 3 == 0) { //月を換算
					result += (m-1)*20;
			}else{
				for (int i = 1; i < m; i++) {
					result += i%2==0? 19:20;
				}
			}
			result += d; //日を足す
			int ans = 196471 - result;
			System.out.println(ans);
		}
	}
}