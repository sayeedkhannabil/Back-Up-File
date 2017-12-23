package Inheritance3;

public class Employee extends Person {
	private String department;
	private String designation;

	public Employee(String name, String gender, String address, String department, String designation) {
		super(name, gender, address);
		this.department = department;
		this.designation = designation;
	}

	public void setEmployee(String department, String designation){
		this.department = department;
		this.designation = designation;
	}


	public String getDepartment(){
		return department;
	}

	public String getDesignation(){
		return designation;
	}

	public String toString(){
		return super.toString()  + "\nDepartment: " + department + "\nDesignation: " + designation;
	}

}
