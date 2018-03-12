package Test;

import Coursera.QuickFindUF;

public class Main {
	public static void main(String[] args) {
		QuickFindUF quickFindUF = new QuickFindUF(11);

		quickFindUF.union(4,2);
		quickFindUF.union(4, 1);
		quickFindUF.union(8, 7);
		quickFindUF.union(5,6);
		quickFindUF.union(6,10);
		quickFindUF.union(10, 1);
		System.out.println(quickFindUF.connected(4,6));
	}

}
