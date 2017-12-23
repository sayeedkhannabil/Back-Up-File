package Inheritance3;

public class PartTimeEmployee extends Employee{
	private double hours;
	private double rate;

	public PartTimeEmployee(String name, String gender, String address, String department, String designation, double hours, double rate){
		super(name, gender, address, department, designation);
		this.hours = hours;
		this.rate = rate;
	}

	public  void setHours(double hours){
		this.hours = hours;
	}

	public void setRate(double rate){
		this.rate = rate;
	}

	public double getHours(){
		return hours;
	}

	public double getRate(){
		return rate;
	}

	public String toString(){
		return super.toString()+ "\nHours: " + hours + "\nRate: " + rate;
	}

	public double salary(){
		return rate*hours;
	}
}
