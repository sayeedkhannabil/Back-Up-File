import java.util.*;

public class CourseManagement {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		//void input function
		int studentQuantity;
		System.out.print("Enter student Quatity: ");
		studentQuantity = scan.nextInt();


		String[] studentName = new String[studentQuantity];
		int[] studentId = new int[studentQuantity];

		input(studentName, studentId);

		for(int i = 0; i < studentName.length; i++){
			System.out.println(studentName[i] + "  " + studentId[i]);
		}

		System.out.print("\n\n\n");

		//void updateScore
		System.out.print("Enter total score: ");
		double totalExamScore = scan.nextDouble();

		double[] score = new double[studentQuantity];

		System.out.println("Enter the scores of the students: ");

		updateScore(score, totalExamScore);



		//maxScore
		System.out.println("The maximum score: " + maxScore(score));

		System.out.println();
		System.out.println();

		//calculateGrade

		double[] gradeThreshold = {93, 83, 73, 60};

		System.out.print("Enter your score: ");
		double scoreInput = scan.nextDouble();

		System.out.println("Your grade is : " + calculateGrade(scoreInput, gradeThreshold));

		System.out.println();
		System.out.println();

		//sort student Id

		int[] sortedId = sort(studentId);

		System.out.println("Sorted Student Id:");

		for (int i = 0; i < sortedId.length; i++){
			System.out.print(sortedId[i] + " ");
		}

		System.out.println();
		System.out.println();

		//sort scores

		int[] sortedIndex = sort(score);

		System.out.println("Sorted Indexes of score data: ");
		for (int i = 0; i < sortedIndex.length; i++){
			System.out.print(sortedIndex[i] + " ");
		}


	}

	static void input(String[] studentName, int[] studentId){
		Scanner scan = new Scanner(System.in);

		System.out.println("Enter Student Names and Ids: ");

		for (int i = 0; i < studentName.length; i++){
			studentName[i] =  scan.next();
			studentId[i] = scan.nextInt();
		}

	}

	static void updateScore (double[] score, double totalExamScore){
		Scanner scan = new Scanner(System.in);

		int temp;
		int i = 0;

		while(i < score.length) {
			temp = scan.nextInt();

			if (temp <= totalExamScore) {
				score[i] = temp;
				i++;

			} else
				System.out.println("Invalid Input\n" + "Try again\n");
		}
	}

	static double maxScore (double[] score){
		int maxIndex = 0;

		for (int i = 1; i < score.length; i++){
			if(score[maxIndex] < score[i])
				maxIndex = i;
		}

		return score[maxIndex];
	}


	static int[] sort (int[] studentId){
		int temp;
		int[] temp_studentId = studentId;
		for (int i = 0; i < temp_studentId.length - 1 ; i++){
			for (int j = 0; j < temp_studentId.length - i - 1; j++){
				if(temp_studentId[j] > temp_studentId[j + 1]) {
					temp = temp_studentId[j];
					temp_studentId[j] = temp_studentId[j + 1];
					temp_studentId[j + 1] = temp;
				}
			}
		}

		return temp_studentId;
	}

	static int binarySearch (double[] array, double item){
		int left = 0;
		int right = array.length - 1;
		int mid;

		while(left <= right){
			mid = left + (right - left)/2;

			if(array[mid] == item)
				return mid;

			else if(array[mid] < item)
				left = mid + 1;

			else if(array[mid] > item)
				right = mid - 1;
		}

		return -1;
	}

	static int[] sort (double[] score){
		double[] sorted_score = score;

		int[] sortedIndex = new int[score.length];
		double temp;

		for (int i = 0; i < sorted_score.length - 1 ; i++){
			for (int j = 0; j < sorted_score.length - i - 1; j++){
				if(sorted_score[j] > sorted_score[j + 1]) {
					temp = sorted_score[j];
					sorted_score[j] = sorted_score[j + 1];
					sorted_score[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < sorted_score.length; i++){
			sortedIndex[i] = binarySearch(score, sorted_score[i]);
		}

		return sortedIndex;
	}

	static char calculateGrade (double score, double[] gradeScale){
		if(score >= gradeScale[0])
			return 'A';

		else if(score < gradeScale[0] && score >= gradeScale[1])
			return 'B';

		else if(score < gradeScale[1] && score >= gradeScale[2])
			return 'C';

		else if(score < gradeScale[2] && score >= gradeScale[3])
			return 'D';

		else
			return 'F';

	}


}
