package Gemerics;

public class GenericSort {

	public static <E extends Comparable<E>> void sort(E[] list){

		for(int i = 0; i<list.length - 1; i++){

			int index = i;

			for (int j = i+1; j<list.length; j++) {
				if (list[j].compareTo(list[index]) < 0)
					index = j;
			}

			E o = list[index];
			list[index] = list[i];
			list[i] = o;

			}

		for (E x: list
		     ) {
			System.out.print(x);
			System.out.print(", ");
		}

		System.out.println("");
	}
}
