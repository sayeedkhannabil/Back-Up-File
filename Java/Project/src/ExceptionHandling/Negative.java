package ExceptionHandling;

import java.util.Scanner;

public class Negative {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int sum = 0;

		int count = 0;

		while(count<10){
			int n  = scan.nextInt();
			try{
				if(n<0)
					throw new ArithmeticException();
				sum+=n;
				count++;
			}catch(ArithmeticException ex){
				System.out.println("Input positive integer only");
			}
		}

		System.out.println("Sum: " + sum);
	}
}
