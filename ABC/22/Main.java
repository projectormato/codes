import java.util.*;
class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int s = sc.nextInt();
		int t = sc.nextInt();
		int w = 0;
		int result = 0;
		for (int i = 0; i < n; i++) {
			w += sc.nextInt();
			if ((s <= w) && (w <= t)) {
				result += 1;
			}
		}
		System.out.println(result);
	}
}
