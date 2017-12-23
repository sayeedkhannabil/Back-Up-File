package ExceptionHandling;

public class CustomException extends Exception {
	private double radius;

	public CustomException(double radius){
		super("Invalid Radius: " + radius);
		this.radius = radius;
	}

	public double getRadius(){
		return radius;
	}
}
