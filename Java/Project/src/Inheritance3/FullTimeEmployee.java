package Inheritance3;

public class FullTimeEmployee extends Employee {
	private double basic;
	private double allowance;

	public FullTimeEmployee(String name, String gender, String address, String department, String designation, double basic, double allowance) {
		super(name, gender, address, department, designation);
		this.basic = basic;
		this.allowance = allowance;
	}

	public String toString(){
		return super.toString() + "\nBasic: " + basic + "\nAllowance: " + allowance;
	}

	public double salary(){
		return basic+(allowance/100)*basic;
	}
}
