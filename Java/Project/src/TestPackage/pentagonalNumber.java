package TestPackage;

public class pentagonalNumber {
	public static int[] pentagon(int n) {
		int[] array = new int[n];

		for(int i =1; i<=n ; i++){
			array[i-1] = (i*(3*i-1))/2;
		}
		return array;
	}

	public static void main(String[] args) {
		int[] array = pentagon(22);

		for (int x:array
		     ) {
			System.out.println(x);
		}
	}
}