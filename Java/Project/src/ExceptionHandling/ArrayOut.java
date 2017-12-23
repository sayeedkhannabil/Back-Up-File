package ExceptionHandling;

import java.util.Scanner;

public class ArrayOut {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int[] array = new int[100];

		for(int i = 0; i<array.length; i++){
			array[i] = (int) (Math.random() * 1000);
		}

		int userInput = scan.nextInt();

		try{
			if(array[userInput]>100)
				throw new Exception();

			System.out.println(array[userInput]);
		}catch(Exception ex){
			System.out.println("Out of range");
		}

	}
}
