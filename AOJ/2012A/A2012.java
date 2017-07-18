import java.util.*;
class A2012{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int j = 0; j < n; j++) {
			int result = 0;
			int y = sc.nextInt(), m = sc.nextInt(), d = sc.nextInt();
			for (int i = 1; i < y; i++){
				if (i % 3 == 0) {
					result += 200;
				}else{
					result += 195;
				}
			}
			if (y % 3 == 0) {
				result += (m-1) * 20;
			}else {
				for (int i = 1; i < m; i++) {
					if (i % 2 == 0) {
						result += 19;
					}else {
						result += 20;
					}
				}
			}
			result += d;
			int ans = 196471 - result;
			System.out.println(ans);
		}
	}
}