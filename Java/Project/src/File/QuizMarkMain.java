package File;

import java.io.File;
import java.io.*;
import java.util.Scanner;

public class QuizMarkMain {
	public static void main(String[] args) throws Exception {
		File file = new File("E:\\File\\task2.txt");

		boolean newFile = file.createNewFile();

		QuizMark[] q = new QuizMark[4];

		int i = 0;

		try {
			Scanner read = new Scanner(file);

			while (read.hasNext()) {
				int x = read.nextInt();
				double z = read.nextDouble();
				q[i] = new QuizMark(x, z);
				i++;
			}
		}
		catch (Exception e){}

		for (int k = 0; k<q.length; k++){
			System.out.println(q[k]);
		}

	}
}
