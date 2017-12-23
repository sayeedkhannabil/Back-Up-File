package TestPackage;

import java.util.Scanner;
public class Bank {
	public static double balance = 0;

	public  static void deposit(double amount){
		balance = balance + amount;
	}

	public  static void withdraw(double amount){
		balance = balance - amount;
	}

	public static double getBalance(){
		return balance;
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		while(true){
			System.out.println("1. Deposit");
			System.out.println("2. Withdraw");
			System.out.println("3. Balance");
			System.out.println("4. Exit");
			System.out.println("");
			System.out.println("");


			int input = scan.nextInt();
			if(input == 4)
				break;

			if(input == 1){
				deposit(scan.nextDouble());
			}

			if(input == 2){
				withdraw(scan.nextDouble());
			}

			if(input == 3){
				System.out.println(getBalance());
			}

			System.out.println("");
			System.out.println("");

		}
		
		scan.close();
	}
}
