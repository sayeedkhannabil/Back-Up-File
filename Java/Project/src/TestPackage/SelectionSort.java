package TestPackage;

public class SelectionSort {
	public static void selectionSort (double[] list){
		for (int i = 0; i<list.length - 1 ; i++){

			int index = i;

			for (int j = i+1; j<list.length; j++){
				if(list[j]<list[index])
					index = j;
			}

			double smallerNumber = list[index];
			list[index] = list[i];
			list[i] = smallerNumber;
		}

		for (double x: list
		     ) {
			System.out.print(x);
			System.out.print(", ");
		}
	}
}
