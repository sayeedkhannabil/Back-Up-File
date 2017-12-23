package Polymorphism;

public class Main {

	static int setIndex = 0;

	public static void main(String[] args) {
		Plant[] plants = new Plant[10];

		Plant p1 = new Plant("abc", "red");
		Plant p2 = new Flower("asd", "black", false, true);
		Plant p3 = new Flower("alk", "yellow", true, false);
		Plant p4 = (Flower)p3;

		add(plants, p1);
		add(plants, p2);
		add(plants, p3);
		remove(plants,"alk");
		remove(plants, "asd");
		Plant p5 = search(plants, "abc");
		System.out.println(p5.toString());
		display(plants);
	}

	static void add(Plant[] plants, Plant p){
		plants[setIndex] = p;
		setIndex++;
	}

	static void remove(Plant[] plants, String n){
		int i = 0;
		while(!(plants[i].getName().equalsIgnoreCase(n))){
			i++;
		}

		plants[i] = null;
		setIndex--;
	}

	static Plant search(Plant[] plants, String n){
		int flag = -1;
		for(int i = 0; i<setIndex; i++){
			if(plants[i].getName().equalsIgnoreCase(n)){
				flag =i;
			}
		}

		if(flag>-1) {
			return plants[flag];
		}
		else
			return new Plant("notfound", "notfound");
	}

	static void display(Plant[] plants){
		for(int i =0; i<setIndex; i++){
			System.out.println(plants[i].toString());
			System.out.println();
			System.out.println();
		}
	}
}
