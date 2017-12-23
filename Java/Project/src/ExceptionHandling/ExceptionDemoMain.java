package ExceptionHandling;

import Polymorphism.Plant;

public class ExceptionDemoMain {
	public static void main(String[] args){
		try{
			CircleWithCustomException c1 = new CircleWithCustomException(5);
			CircleWithCustomException c3 = new CircleWithCustomException(0);
			CircleWithCustomException c2 = new CircleWithCustomException(-5);
		}
		catch (CustomException ex){
			System.out.println(ex);
		}

		System.out.println("Number of objects: " +CircleWithCustomException.getNumOfObj());

	}
}
