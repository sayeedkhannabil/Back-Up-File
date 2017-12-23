package File;

import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class DemoFile {
	public static void main(String[] args) throws IOException {
		File file = new File("E:\\File\\task1.txt");

		if(!file.exists()){
			file.createNewFile();
		}

		PrintWriter output = new PrintWriter(file);

		output.println("Yesterday I died");
		output.println("Tomorrow's breathing");
		output.println("Falling for the sunshine");
		output.close();

		Scanner scan = new Scanner(file);

		while(scan.hasNext()){
			String line = scan.nextLine();
			System.out.println(line);
		}
	}
}
