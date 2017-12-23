package abstract2;

public abstract class Polygon {
	
	private int numSide;

	public Polygon(int numSide) {
		this.numSide = numSide;
	}

	public int getNumSide() {
		return numSide;
	}

	public void setNumSide(int numSide) {
		this.numSide = numSide;
	}
	
	public abstract double area();
	public abstract double perimeter();
	
	
	

}
