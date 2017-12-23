package abstract2;

public class Triangle extends Polygon{
	private double sideA;
	private double sideB;
	private double sideC;
	
	
	public Triangle(int numSide ,double sideA, double sideB, double sideC) {
		super(numSide);
		this.sideA = sideA;
		this.sideB = sideB;
		this.sideC = sideC;
	}
	public double getSideA() {
		return sideA;
	}
	public void setSideA(double sideA) {
		sideA = sideA;
	}
	public double getSideB() {
		return sideB;
	}
	public void setSideB(double sideB) {
		this.sideB = sideB;
	}
	public double getSideC() {
		return sideC;
	}
	public void setSideC(double sideC) {
		this.sideC = sideC;
	}

	@Override
	public double area() {
		double x = (sideA + sideB + sideC)/2;
		return Math.sqrt(x*(x-sideA)*(x-sideB)*(x-sideC));
	}

	@Override
	public double perimeter() {
		return sideB+sideC+sideA;
	}
	
	

}
