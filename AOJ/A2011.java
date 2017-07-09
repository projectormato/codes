import java.util.*;
class A2011{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0) {
				break;
			}
			int result = 0;
			for (int i = n+1; i <= n*2; i++) {
				for (int j = 2; j <= Math.pow(i,0.5); j++) {
					if (i % j == 0) {
						result ++;
						break;					
					}		
				}
			}
			System.out.println((n*2)-n-result);
		}
	}
}
