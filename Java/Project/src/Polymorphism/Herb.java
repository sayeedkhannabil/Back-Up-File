package Polymorphism;

public class Herb extends Plant {
	private boolean isMedical;
	private String season;

	public Herb(String name, String color, boolean isMedical, String season){
		super(name, color);

		this.isMedical = isMedical;
		this.season = season;
	}

	public boolean isMedical() {
		return isMedical;
	}

	public void setMedical(boolean medical) {
		isMedical = medical;
	}

	public String getSeason() {
		return season;
	}

	public void setSeason(String season) {
		this.season = season;
	}

	public String toString(){
		return super.toString() + "\nMedical: " + isMedical + "\nSeason: " + season;
	}
}
