package Demo;

import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int[] array = new int[10];

		int count = 0;

		for (int i = 0; i < 10; i++) {
			int n = scan.nextInt();

			if(n%2 == 0) {
				array [i] =  n;
			}
		}

		for (int i = 0; i < array.length; i++) {
			if (array[i]!= 0)
				System.out.print(array[i] + " ");
		}
	}
}
