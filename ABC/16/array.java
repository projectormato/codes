import java.util.*;
class array{
	public static void main(String[] args) {
		int[] array = new int[50];
		String[ ][ ] train = new String[10][9];
		train[1][5] = "aaa";
		for (int i = 0; i < 50; i++){
			array[i] = i;
		}
		System.out.println(Arrays.toString(array));
		System.out.println(Arrays.stream(train).map(x -> x).);

		System.out.println(1 + "a");

	}
}