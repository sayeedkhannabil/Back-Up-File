package ExceptionHandling;

public class CircleWithCustomException {
	private double radius;
	private static int numOfObj = 0;

	public CircleWithCustomException(double newRadius) throws CustomException{
		setRadius(newRadius);
		numOfObj++;
	}

	public static int getNumOfObj(){
		return numOfObj;
	}

	public void setRadius(double newRadius) throws CustomException{
			if(newRadius >= 0)
				radius = newRadius;

			else
				throw new CustomException(newRadius);

	}

	public double getArea(){
		return radius*Math.PI*radius;
	}
}
