import java.util.*;
class B{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), min = sc.nextInt(), max = sc.nextInt();
		int east = 0, west = 0, num = 0;
		for (int i = 0; i < n; i++) {
			String way = sc.next();
			num = sc.nextInt();
			if (num < min) {
				num = min;
			}else if (num > max) {
				num = max;
			}
			if (way.equals("East")) {
				east += num;
			}else{
				west += num;
			}
		}
		if (east > west) {
			System.out.println("East " + (east - west) );
		}else if (west > east){
			System.out.println("West " + (west - east) );
		}else{
			System.out.println(0);
		}
	}
}