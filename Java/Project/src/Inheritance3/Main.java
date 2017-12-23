package Inheritance3;

public class Main {
	public static void main(String[] args) {
		FullTimeEmployee e = new FullTimeEmployee("Kuddus", "Male", "Banasree",
				"Accounts", "Senior Accountant", 15000, 25);

		System.out.println(e.salary());
	}
}
