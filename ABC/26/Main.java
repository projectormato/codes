import java.util.Scanner;
import java.util.Arrays;
class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] r = new int[n];
		for(int i = 0; i < n; i++){
			r[i] = sc.nextInt();
		}
		int result = 0;
		Arrays.sort(r);
		
		for(int i = 0; i < r.length; i++){
			if(i%2 == 0) result += r[i] * r[i] * -1;
			else result += r[i] * r[i] * 1;
		}
		System.out.println(result * Math.PI * (-1 * r.length % 2));
	}
}
