/*Takes input until any negative number Entered.
  Write those number on a file.
  Print the average.
 */

package File;

import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class AverageFile {
	public static void main(String[] args) throws IOException {

		Scanner scan = new Scanner(System.in);

		File file = new File("E:\\File\\task1.txt");

		file.createNewFile();

		PrintWriter p = null;
		int count = 0;

		try{
			p = new PrintWriter(file);

			while (true){
				int i = scan.nextInt();
				if(i<0)
					break;

				p.println(i);
				count++;
			}
		}
		catch (Exception e){
			System.out.println("Error");
		}
		finally {
			p.close();
		}

		int [] arr = new int[count];
		int j = 0;

		try{
			Scanner read = new Scanner(file);
			while(read.hasNext()){
				arr[j] = read.nextInt();
				j++;
			}
		}
		catch (Exception e){}

		int sum = 0;

		for (int i = 0; i<arr.length; i++){
			sum = sum + arr[i];
		}

		for (int k = 0; k<arr.length; k++){
			System.out.println(arr[k]);
		}

		System.out.println("Average: " + sum/(count*1.0));

	}
}
