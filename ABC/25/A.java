import java.util.*;
class A{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n = sc.nextLine();
		int s = sc.nextInt();
		System.out.print(n.charAt((s-1)/5));
		System.out.println(n.charAt((s-1)%5));
	}
}