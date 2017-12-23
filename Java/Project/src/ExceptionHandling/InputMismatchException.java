package ExceptionHandling;

import java.util.Scanner;

public class InputMismatchException {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		boolean continueInput = true;

		do{
			try{
				int n = scan.nextInt();

				System.out.println("The number is: " + n);

				continueInput = false;
			}catch (java.util.InputMismatchException ex){
				System.out.println("Input integer");
				scan.nextLine();
			}
		}while(continueInput);
	}
}
